use JSON::PP;

# cerner_2^5_2019

my $structure = {villans => [{name => 'Grendel', foe => 'Beowulf'},
                {name => 'Iago', foe => 'Othello'}]};
print encode_json [$structure];

