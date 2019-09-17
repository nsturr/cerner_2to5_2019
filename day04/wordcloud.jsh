import com.kennycason.kumo.*
import com.kennycason.kumo.bg.PixelBoundryBackground;
import com.kennycason.kumo.font.scale.LinearFontScalar;
import com.kennycason.kumo.nlp.FrequencyAnalyzer;
import com.kennycason.kumo.palette.ColorPalette;
import java.awt.*;
import java.util.List;

// cerner_2^5_2019

FrequencyAnalyzer frequencyAnalyzer = new FrequencyAnalyzer();
frequencyAnalyzer.setWordFrequenciesToReturn(300);
frequencyAnalyzer.setMinWordLength(4);

List<WordFrequency> wordFrequencies = frequencyAnalyzer.load("input.txt");
Dimension dimension = new Dimension(500, 312);
WordCloud wordCloud = new WordCloud(dimension, CollisionMode.PIXEL_PERFECT);
wordCloud.setPadding(2);
wordCloud.setBackground(new PixelBoundryBackground("background.png"));
wordCloud.setColorPalette(new ColorPalette(new Color(0x4055F1), new Color(0x408DF1), new Color(0x40AAF1), new Color(0x40C5F1), new Color(0x40D3F1), new Color(0xFFFFFF)));
wordCloud.setFontScalar(new LinearFontScalar(10, 40));
wordCloud.build(wordFrequencies);
wordCloud.writeToFile("wordcloud.png");

