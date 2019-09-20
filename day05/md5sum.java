import java.security.*;
import java.io.*;
// cerner_2^5_2019
public class md5sum {
    public static void main(String []args) throws Exception {
        if (args.length != 1) {
            System.err.println("Usage: md5sum <file>");
            return;
        }

        try (BufferedInputStream inputStream = new BufferedInputStream(new FileInputStream(args[0]))) {
            ByteArrayOutputStream outputStream = new ByteArrayOutputStream();
            int inChar;

            while ((inChar = inputStream.read()) > -1) {
                outputStream.write(inChar);
            }

            byte[] buffer = outputStream.toByteArray();
            MessageDigest md = MessageDigest.getInstance("MD5");
            md.update(buffer);
            byte[] digest = md.digest();

            for (int i=0; i<digest.length; i++) {
                String hexVal = Integer.toHexString((digest[i] >= 0) ?  digest[i] : 256 + digest[i]);
                if (hexVal.length() == 1) hexVal = "0" + hexVal; //prefix a zero to look uniformed;
                System.out.print(hexVal);
            }
        }
    }
}
