
const char PAGE_IndexPage[] PROGMEM = R"=====(
<!DOCTYPE html><html><head><style>fieldset {padding-top:10px;border:1px solid #666;border-radius:8px;}legend {float:left;margin-top:-20px;}legend {padding:1px 1px;background:#fff; /* For better legibility against the box-shadow */}legend + * {clear:both;}</style></head><body><div>Wifi Direct IP:{APIP}</div><p></p><fieldset><legend>Wifi Setting</legend><P>SSID Name:{SI}</P><P>SSID Password:{SIP}</P><P>Status:{STATE}</P><P></P><fieldset><legend>IP</legend><p>IP:{LIP}</p><p>GW:{LGW}</p></fieldset></fieldset> <P></P> <P></P> <form method='get' action='setting' id="form-setting" name="form-setting" onsubmit="return checkAllField(this)"><fieldset><legend>Change Setting</legend><P></P> SSID <select id= "SSIDFastSelection" name="ssids" onchange='ValueFillTo(this.id,"SSIDName")' style="width:90%;font-size:110%"> <option value="*-*">===SELECT===</option> {SIDOPT} </select> <P></P> <p> <label for ="SSIDName">SSID Name</label> <input id="SSIDName" name="ssid" maxlength="32" style="width:80%;font-size:110%"> </p> <p> <label for ="SSIDPassword">SSID Password</label> <input id="SSIDPassowrd" name="pass" maxlength="32" style="width:80%;font-size:110%"> </p> <p> <label for ="dhcpAuto">Auto</label> <input type="radio" id="dhcpAuto" name="dhcpAuto" value="1" checked onClick='showBlock("ManualIP",false);'> <label for ="dhcpAuto">Manual</label> <input type="radio" id="dhcpAuto" name="dhcpAuto" value="0" onClick='showBlock("ManualIP",true);'> <div id="ManualIP"> <fieldset><legend>Setting</legend><table border="0px" cellPadding ="3px" cellSpacing="3px"><tr><td>IP</td><td><input type="text" id="ip1" name="ip1" maxlength="3">.<input type="text" id="ip2" name="ip2" maxlength="3">.<input type="text" id="ip3" name="ip3" maxlength="3">.<input type="text" id="ip4" name="ip4" maxlength="3"></td></tr><tr><td>Gateway</td><td><input type="text" id="gw1" name="gw1" maxlength="3">.<input type="text" id="gw2" name="gw2" maxlength="3">.<input type="text" id="gw3" name="gw3" maxlength="3">.<input type="text" id="gw4" name="ip4" maxlength="3"></td></tr><tr><td>Netmask</td><td><input type="text" id="sn1" name="sn1" maxlength="3">.<input type="text" id="sn2" name="sn2" maxlength="3">.<input type="text" id="sn3" name="sn3" maxlength="3">.<input type="text" id="sn4" name="sn4" maxlength="3"></td></tr><tr><td>DNS</td><td><input type="text" id="dns1" name="dns1" maxlength="3">.<input type="text" id="dns2" name="dns2" maxlength="3">.<input type="text" id="dns3" name="dns3" maxlength="3">.<input type="text" id="dns4" name="dns4" maxlength="3"></td></tr></table> </fieldset> </div> <input type="submit"> </p></fieldset> </form><script>function checkVaildRange(a,b,c){var d=document.getElementById(a),e=d.value;return e<b||e>c?(alert("Range is:"+b+"~"+c),d.style.border="thick solid #0000FF",setTimeout(function(){d.focus()},1),1):(d.style.border="",0)}function checkVaildText(a,b){var c=document.getElementById(a),d=c.value;return""==d?(alert(b),c.style.border="thick solid #0000FF",setTimeout(function(){c.focus()},1),1):(c.style.border="",0)}function ValueFillTo(a,b){var c=document.getElementById("SSIDName"),d=document.getElementById(a).value;"*-*"!=d&&(c.value=d,c.focus())}function showBlock(a,b){b?(document.getElementById(a).style.display="",dhcpAuto=0):(dhcpAuto=1,document.getElementById(a).style.display="none")}function checkAllField(a){return 1!=checkVaildText("SSIDName","SSID Name is empty")&&(1!=checkVaildText("SSIDPassowrd","SSID Password is empty")&&(console.log("dhcpAuto:"+dhcpAuto),1==dhcpAuto||1!=checkVaildRange("ip1",1,255)&&(1!=checkVaildRange("ip2",1,255)&&(1!=checkVaildRange("ip3",1,255)&&(1!=checkVaildRange("ip4",1,255)&&(1!=checkVaildRange("gw1",1,255)&&(1!=checkVaildRange("gw2",1,255)&&(1!=checkVaildRange("gw3",1,255)&&(1!=checkVaildRange("gw4",1,255)&&(1!=checkVaildRange("sn1",1,255)&&(1!=checkVaildRange("sn2",1,255)&&(1!=checkVaildRange("sn3",1,255)&&(1!=checkVaildRange("sn4",1,255)&&(1!=checkVaildRange("dns1",1,255)&&(1!=checkVaildRange("dns2",1,255)&&(1!=checkVaildRange("dns3",1,255)&&1!=checkVaildRange("dns4",1,255)))))))))))))))))}var dhcpAuto;!function(){showBlock("ManualIP",!1)}();</script></body></html>

)=====";
