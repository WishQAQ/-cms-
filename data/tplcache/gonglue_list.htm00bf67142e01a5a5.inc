<?php
$z[0]=Array("field","",254,273);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",415,444);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",484,542);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",567,602);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",800,860);
$z[5][4]=array();
$z[5][4]['name']="typeurl";
$z[5][4]['function']="”GetTypeName(@me)”";
$z[6]=Array("field","",862,923);
$z[6][4]=array();
$z[6][4]['name']="typename";
$z[6][4]['function']="”GetTypeName(@me)”";
$z[7]=Array("field","",983,1012);
$z[7][4]=array();
$z[7][4]['name']="position";
$z[8]=Array("channel","\r\n        <li class=\"t0[field:global name=autoindex runphp=\"yes\"]@me=@me+1;[/field:global]\"><a href='[field:typelink/]'>[field:typename/]</a></li>\r\n        ",1083,1291);
$z[8][4]=array();
$z[8][4]['type']="son";
$z[8][4]['typeid']="3";
$z[9]=Array("list","\r\n        <li>\r\n          <table width=\"100%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">\r\n            <tbody>\r\n              <tr>\r\n                <td width=\"12%\"><a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" width=\"82\" height=\"80\"></a></td>\r\n                <td width=\"88%\" valign=\"top\"><a href=\"[field:arcurl/]\">\r\n                  <p class=\"c_blue\">[field:title/]</p>\r\n                  <p class=\"f_12\">[field:description/]</p>\r\n                  </a></td>\r\n              </tr>\r\n            </tbody>\r\n          </table>\r\n        </li>\r\n        ",1370,1962);
$z[9][4]=array();
$z[9][4]['pagesize']="10";
$z[10]=Array("pagelist","",2104,2176);
$z[10][4]=array();
$z[10][4]['istitem']="index,pre,next,end,option,info,";
$z[10][4]['listsize']="10";
$z[11]=Array("include","",2268,2305);
$z[11][4]=array();
$z[11][4]['filename']="footer.htm";

?>