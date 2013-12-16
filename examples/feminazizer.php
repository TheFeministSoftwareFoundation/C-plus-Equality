<?php
$data=file_get_contents($argv[1]);
$replaces=array(
//'#include'=>'#consider',
'std::string '=>'emotion',
'std::cerr \<\< ([[:alnum:]\.\[\]\'\*]+)'=> 'mansplain(\\1)', // untested
'main\s*\('=>'womain(',
'int '=>'xi ',
'double '=>'fatpride ',
'char '=>'strong ',
'private '=>'privileged ',
'public '=>'POC ',
'try '=>'attempt ',
'catch '=>'on_alternative_success ',
'throw '=>'post_on_tumblr ',
'class '=>'support_group ',
'do '=>'perform ',
'break'=>'leave',
'switch'=>'give_consent_to',
'case'=>'currently_identifying_as',
'if '=>'maybe ',
'else '=>'perhaps_and_equally_valid ',
'std::'=>'plz::',
'cout '=>'raise_awareness ',
'void\s*\*'=>'trans',
'}'=>'ENDMISOGYNY',
// honors is (X)<(Y)
'([[:alnum:]\.\[\]]+)<([[:alnum:]\.\[\]\'\*\-\_]+)'=>'honors(\\1,\\2)',
'([[:alnum:]\.\[\]]+)\+\+'=>'like(\\1)',
'\+\+([[:alnum:]\.\[\]]+)'=>'like(\\1)',
' << '=>' of_the_following ',
'([[:alnum:]\[\]\.]+)=([[:alnum:]\_\[\]\.\*\+\(\)\%]+)'=>'pretend_is(\\1,\\2)',
// kinda hacky
'rand\(\)%([[:alnum:]\(\),]+)'=>'envelops(rand(),\\1)',
);
foreach($replaces as $s=>$r) {
  $data=preg_replace('/'.$s.'/',$r,$data);
}

echo '#include "fixCPP.Xe"',"\n";
echo $data;