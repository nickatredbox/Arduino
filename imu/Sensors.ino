



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "7HOlx34rd1KVslX1OnrZZB0b4Hw:1357193109420";
 
 
 var CS_env = {"profileUrl":"/u/115064288433996225253/","projectHomeUrl":"/p/multiwii","token":"7HOlx34rd1KVslX1OnrZZB0b4Hw:1357193109420","assetVersionPath":"https://ssl.gstatic.com/codesite/ph/16229512607128645344","domainName":null,"projectName":"multiwii","assetHostPath":"https://ssl.gstatic.com/codesite/ph","relativeBaseUrl":"","loggedInUserEmail":"nickatredbox@gmail.com"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>Sensors.ino - 
 multiwii -
 
 
 MultiWii is a software to control a RC multi copter - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16229512607128645344/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16229512607128645344/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16229512607128645344/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16229512607128645344/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>nickatredbox@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/115064288433996225253/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/115064288433996225253/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fmultiwii%2Fsource%2Fbrowse%2Ftrunk%2FMultiWii%2FSensors.ino" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/multiwii">
 <a href="/p/multiwii/">
 
 <img src="https://ssl.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/multiwii/"><span itemprop="name">multiwii</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/multiwii/"><span itemprop="description">MultiWii is a software to control a RC multi copter</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/multiwii/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/multiwii/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/multiwii/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 
 
 <a href="/p/multiwii/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/multiwii/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/multiwii/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/multiwii/source/list">Changes</a></span> &nbsp;
 
 &nbsp;
 
 
 <form action="/p/multiwii/source/search" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/multiwii/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/multiwii/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/multiwii/source/browse/trunk/MultiWii/">MultiWii</a><span class="sp">/&nbsp;</span>Sensors.ino</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/multiwii/source/browse/trunk/MultiWii/Sensors.ino?r=988" title="Previous">&lsaquo;r988</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r1303</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn1303_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn1303_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn1303_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn1303_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn1303_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn1303_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn1303_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn1303_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn1303_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn1303_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn1303_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn1303_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn1303_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn1303_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn1303_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn1303_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn1303_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn1303_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn1303_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn1303_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn1303_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn1303_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn1303_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn1303_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn1303_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn1303_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn1303_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn1303_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn1303_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn1303_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn1303_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn1303_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn1303_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn1303_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn1303_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn1303_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn1303_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn1303_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn1303_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn1303_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn1303_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn1303_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn1303_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn1303_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn1303_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn1303_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn1303_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn1303_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn1303_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn1303_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn1303_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn1303_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn1303_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn1303_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn1303_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn1303_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn1303_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn1303_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn1303_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn1303_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn1303_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn1303_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn1303_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn1303_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn1303_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn1303_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn1303_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn1303_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn1303_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn1303_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn1303_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn1303_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn1303_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn1303_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn1303_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn1303_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn1303_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn1303_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn1303_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn1303_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn1303_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn1303_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn1303_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn1303_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn1303_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn1303_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn1303_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn1303_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn1303_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn1303_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn1303_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn1303_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn1303_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn1303_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn1303_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn1303_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn1303_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn1303_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn1303_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn1303_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn1303_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn1303_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn1303_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn1303_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn1303_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn1303_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn1303_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn1303_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn1303_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn1303_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn1303_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn1303_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn1303_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn1303_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn1303_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn1303_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn1303_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn1303_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn1303_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn1303_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn1303_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn1303_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn1303_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn1303_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn1303_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn1303_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn1303_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn1303_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn1303_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn1303_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn1303_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn1303_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn1303_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn1303_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn1303_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn1303_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn1303_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn1303_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn1303_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn1303_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn1303_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn1303_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn1303_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn1303_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn1303_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn1303_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn1303_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn1303_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn1303_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn1303_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn1303_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn1303_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn1303_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn1303_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn1303_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn1303_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn1303_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn1303_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn1303_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn1303_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn1303_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn1303_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn1303_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn1303_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn1303_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn1303_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn1303_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn1303_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn1303_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn1303_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn1303_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn1303_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn1303_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn1303_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn1303_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn1303_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn1303_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn1303_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn1303_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn1303_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn1303_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn1303_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn1303_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn1303_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn1303_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn1303_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn1303_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn1303_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn1303_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn1303_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn1303_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn1303_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn1303_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn1303_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn1303_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn1303_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn1303_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn1303_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn1303_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn1303_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn1303_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn1303_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn1303_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn1303_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn1303_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn1303_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn1303_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn1303_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn1303_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn1303_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn1303_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn1303_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn1303_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn1303_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn1303_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn1303_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn1303_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn1303_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn1303_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn1303_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn1303_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn1303_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn1303_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn1303_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn1303_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn1303_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn1303_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn1303_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn1303_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn1303_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn1303_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn1303_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn1303_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn1303_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn1303_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn1303_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn1303_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn1303_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn1303_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn1303_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn1303_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn1303_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn1303_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn1303_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn1303_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn1303_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn1303_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn1303_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn1303_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn1303_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn1303_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn1303_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn1303_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn1303_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn1303_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn1303_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn1303_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn1303_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn1303_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn1303_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn1303_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn1303_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn1303_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn1303_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn1303_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn1303_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn1303_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn1303_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn1303_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn1303_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn1303_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn1303_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn1303_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn1303_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn1303_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn1303_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn1303_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn1303_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn1303_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn1303_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn1303_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn1303_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn1303_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn1303_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn1303_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn1303_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn1303_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn1303_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn1303_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn1303_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn1303_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn1303_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn1303_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn1303_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn1303_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn1303_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn1303_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn1303_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn1303_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn1303_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn1303_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn1303_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn1303_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn1303_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn1303_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn1303_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn1303_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn1303_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn1303_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn1303_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn1303_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn1303_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn1303_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn1303_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn1303_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn1303_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn1303_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn1303_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn1303_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn1303_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn1303_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn1303_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn1303_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn1303_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn1303_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn1303_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn1303_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn1303_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn1303_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn1303_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn1303_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn1303_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn1303_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn1303_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn1303_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn1303_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn1303_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn1303_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn1303_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn1303_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn1303_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn1303_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn1303_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn1303_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn1303_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn1303_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn1303_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn1303_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn1303_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn1303_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn1303_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn1303_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn1303_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn1303_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn1303_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn1303_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn1303_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn1303_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn1303_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn1303_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn1303_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn1303_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn1303_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn1303_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn1303_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn1303_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn1303_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn1303_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn1303_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn1303_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn1303_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn1303_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn1303_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn1303_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn1303_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn1303_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn1303_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn1303_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn1303_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn1303_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn1303_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn1303_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn1303_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn1303_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn1303_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn1303_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn1303_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn1303_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn1303_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn1303_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn1303_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn1303_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn1303_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn1303_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn1303_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn1303_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn1303_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn1303_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn1303_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn1303_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn1303_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn1303_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn1303_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn1303_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn1303_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn1303_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn1303_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn1303_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn1303_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn1303_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn1303_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn1303_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn1303_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn1303_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn1303_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn1303_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn1303_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn1303_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn1303_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn1303_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn1303_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn1303_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn1303_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn1303_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn1303_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn1303_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn1303_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn1303_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn1303_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn1303_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn1303_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn1303_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn1303_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn1303_434"

><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn1303_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn1303_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn1303_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn1303_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn1303_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn1303_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn1303_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn1303_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn1303_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn1303_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn1303_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn1303_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn1303_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn1303_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn1303_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn1303_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn1303_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn1303_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn1303_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn1303_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn1303_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn1303_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn1303_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn1303_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn1303_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn1303_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn1303_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn1303_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn1303_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn1303_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn1303_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn1303_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn1303_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn1303_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn1303_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn1303_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn1303_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn1303_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn1303_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn1303_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn1303_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn1303_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn1303_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn1303_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn1303_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn1303_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn1303_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn1303_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn1303_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn1303_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn1303_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn1303_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn1303_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn1303_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn1303_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn1303_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn1303_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn1303_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn1303_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn1303_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn1303_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn1303_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn1303_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn1303_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn1303_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn1303_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn1303_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn1303_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn1303_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn1303_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn1303_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn1303_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn1303_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn1303_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn1303_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn1303_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn1303_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn1303_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn1303_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn1303_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn1303_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn1303_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn1303_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn1303_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn1303_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn1303_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn1303_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn1303_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn1303_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn1303_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn1303_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn1303_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn1303_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn1303_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn1303_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn1303_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn1303_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn1303_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn1303_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn1303_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn1303_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn1303_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn1303_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn1303_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn1303_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn1303_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn1303_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn1303_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn1303_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn1303_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn1303_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn1303_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn1303_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn1303_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn1303_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn1303_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn1303_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn1303_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn1303_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn1303_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn1303_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn1303_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn1303_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn1303_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn1303_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn1303_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn1303_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn1303_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn1303_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn1303_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn1303_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn1303_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn1303_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn1303_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn1303_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn1303_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn1303_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn1303_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn1303_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn1303_574"

><td id="574"><a href="#574">574</a></td></tr
><tr id="gr_svn1303_575"

><td id="575"><a href="#575">575</a></td></tr
><tr id="gr_svn1303_576"

><td id="576"><a href="#576">576</a></td></tr
><tr id="gr_svn1303_577"

><td id="577"><a href="#577">577</a></td></tr
><tr id="gr_svn1303_578"

><td id="578"><a href="#578">578</a></td></tr
><tr id="gr_svn1303_579"

><td id="579"><a href="#579">579</a></td></tr
><tr id="gr_svn1303_580"

><td id="580"><a href="#580">580</a></td></tr
><tr id="gr_svn1303_581"

><td id="581"><a href="#581">581</a></td></tr
><tr id="gr_svn1303_582"

><td id="582"><a href="#582">582</a></td></tr
><tr id="gr_svn1303_583"

><td id="583"><a href="#583">583</a></td></tr
><tr id="gr_svn1303_584"

><td id="584"><a href="#584">584</a></td></tr
><tr id="gr_svn1303_585"

><td id="585"><a href="#585">585</a></td></tr
><tr id="gr_svn1303_586"

><td id="586"><a href="#586">586</a></td></tr
><tr id="gr_svn1303_587"

><td id="587"><a href="#587">587</a></td></tr
><tr id="gr_svn1303_588"

><td id="588"><a href="#588">588</a></td></tr
><tr id="gr_svn1303_589"

><td id="589"><a href="#589">589</a></td></tr
><tr id="gr_svn1303_590"

><td id="590"><a href="#590">590</a></td></tr
><tr id="gr_svn1303_591"

><td id="591"><a href="#591">591</a></td></tr
><tr id="gr_svn1303_592"

><td id="592"><a href="#592">592</a></td></tr
><tr id="gr_svn1303_593"

><td id="593"><a href="#593">593</a></td></tr
><tr id="gr_svn1303_594"

><td id="594"><a href="#594">594</a></td></tr
><tr id="gr_svn1303_595"

><td id="595"><a href="#595">595</a></td></tr
><tr id="gr_svn1303_596"

><td id="596"><a href="#596">596</a></td></tr
><tr id="gr_svn1303_597"

><td id="597"><a href="#597">597</a></td></tr
><tr id="gr_svn1303_598"

><td id="598"><a href="#598">598</a></td></tr
><tr id="gr_svn1303_599"

><td id="599"><a href="#599">599</a></td></tr
><tr id="gr_svn1303_600"

><td id="600"><a href="#600">600</a></td></tr
><tr id="gr_svn1303_601"

><td id="601"><a href="#601">601</a></td></tr
><tr id="gr_svn1303_602"

><td id="602"><a href="#602">602</a></td></tr
><tr id="gr_svn1303_603"

><td id="603"><a href="#603">603</a></td></tr
><tr id="gr_svn1303_604"

><td id="604"><a href="#604">604</a></td></tr
><tr id="gr_svn1303_605"

><td id="605"><a href="#605">605</a></td></tr
><tr id="gr_svn1303_606"

><td id="606"><a href="#606">606</a></td></tr
><tr id="gr_svn1303_607"

><td id="607"><a href="#607">607</a></td></tr
><tr id="gr_svn1303_608"

><td id="608"><a href="#608">608</a></td></tr
><tr id="gr_svn1303_609"

><td id="609"><a href="#609">609</a></td></tr
><tr id="gr_svn1303_610"

><td id="610"><a href="#610">610</a></td></tr
><tr id="gr_svn1303_611"

><td id="611"><a href="#611">611</a></td></tr
><tr id="gr_svn1303_612"

><td id="612"><a href="#612">612</a></td></tr
><tr id="gr_svn1303_613"

><td id="613"><a href="#613">613</a></td></tr
><tr id="gr_svn1303_614"

><td id="614"><a href="#614">614</a></td></tr
><tr id="gr_svn1303_615"

><td id="615"><a href="#615">615</a></td></tr
><tr id="gr_svn1303_616"

><td id="616"><a href="#616">616</a></td></tr
><tr id="gr_svn1303_617"

><td id="617"><a href="#617">617</a></td></tr
><tr id="gr_svn1303_618"

><td id="618"><a href="#618">618</a></td></tr
><tr id="gr_svn1303_619"

><td id="619"><a href="#619">619</a></td></tr
><tr id="gr_svn1303_620"

><td id="620"><a href="#620">620</a></td></tr
><tr id="gr_svn1303_621"

><td id="621"><a href="#621">621</a></td></tr
><tr id="gr_svn1303_622"

><td id="622"><a href="#622">622</a></td></tr
><tr id="gr_svn1303_623"

><td id="623"><a href="#623">623</a></td></tr
><tr id="gr_svn1303_624"

><td id="624"><a href="#624">624</a></td></tr
><tr id="gr_svn1303_625"

><td id="625"><a href="#625">625</a></td></tr
><tr id="gr_svn1303_626"

><td id="626"><a href="#626">626</a></td></tr
><tr id="gr_svn1303_627"

><td id="627"><a href="#627">627</a></td></tr
><tr id="gr_svn1303_628"

><td id="628"><a href="#628">628</a></td></tr
><tr id="gr_svn1303_629"

><td id="629"><a href="#629">629</a></td></tr
><tr id="gr_svn1303_630"

><td id="630"><a href="#630">630</a></td></tr
><tr id="gr_svn1303_631"

><td id="631"><a href="#631">631</a></td></tr
><tr id="gr_svn1303_632"

><td id="632"><a href="#632">632</a></td></tr
><tr id="gr_svn1303_633"

><td id="633"><a href="#633">633</a></td></tr
><tr id="gr_svn1303_634"

><td id="634"><a href="#634">634</a></td></tr
><tr id="gr_svn1303_635"

><td id="635"><a href="#635">635</a></td></tr
><tr id="gr_svn1303_636"

><td id="636"><a href="#636">636</a></td></tr
><tr id="gr_svn1303_637"

><td id="637"><a href="#637">637</a></td></tr
><tr id="gr_svn1303_638"

><td id="638"><a href="#638">638</a></td></tr
><tr id="gr_svn1303_639"

><td id="639"><a href="#639">639</a></td></tr
><tr id="gr_svn1303_640"

><td id="640"><a href="#640">640</a></td></tr
><tr id="gr_svn1303_641"

><td id="641"><a href="#641">641</a></td></tr
><tr id="gr_svn1303_642"

><td id="642"><a href="#642">642</a></td></tr
><tr id="gr_svn1303_643"

><td id="643"><a href="#643">643</a></td></tr
><tr id="gr_svn1303_644"

><td id="644"><a href="#644">644</a></td></tr
><tr id="gr_svn1303_645"

><td id="645"><a href="#645">645</a></td></tr
><tr id="gr_svn1303_646"

><td id="646"><a href="#646">646</a></td></tr
><tr id="gr_svn1303_647"

><td id="647"><a href="#647">647</a></td></tr
><tr id="gr_svn1303_648"

><td id="648"><a href="#648">648</a></td></tr
><tr id="gr_svn1303_649"

><td id="649"><a href="#649">649</a></td></tr
><tr id="gr_svn1303_650"

><td id="650"><a href="#650">650</a></td></tr
><tr id="gr_svn1303_651"

><td id="651"><a href="#651">651</a></td></tr
><tr id="gr_svn1303_652"

><td id="652"><a href="#652">652</a></td></tr
><tr id="gr_svn1303_653"

><td id="653"><a href="#653">653</a></td></tr
><tr id="gr_svn1303_654"

><td id="654"><a href="#654">654</a></td></tr
><tr id="gr_svn1303_655"

><td id="655"><a href="#655">655</a></td></tr
><tr id="gr_svn1303_656"

><td id="656"><a href="#656">656</a></td></tr
><tr id="gr_svn1303_657"

><td id="657"><a href="#657">657</a></td></tr
><tr id="gr_svn1303_658"

><td id="658"><a href="#658">658</a></td></tr
><tr id="gr_svn1303_659"

><td id="659"><a href="#659">659</a></td></tr
><tr id="gr_svn1303_660"

><td id="660"><a href="#660">660</a></td></tr
><tr id="gr_svn1303_661"

><td id="661"><a href="#661">661</a></td></tr
><tr id="gr_svn1303_662"

><td id="662"><a href="#662">662</a></td></tr
><tr id="gr_svn1303_663"

><td id="663"><a href="#663">663</a></td></tr
><tr id="gr_svn1303_664"

><td id="664"><a href="#664">664</a></td></tr
><tr id="gr_svn1303_665"

><td id="665"><a href="#665">665</a></td></tr
><tr id="gr_svn1303_666"

><td id="666"><a href="#666">666</a></td></tr
><tr id="gr_svn1303_667"

><td id="667"><a href="#667">667</a></td></tr
><tr id="gr_svn1303_668"

><td id="668"><a href="#668">668</a></td></tr
><tr id="gr_svn1303_669"

><td id="669"><a href="#669">669</a></td></tr
><tr id="gr_svn1303_670"

><td id="670"><a href="#670">670</a></td></tr
><tr id="gr_svn1303_671"

><td id="671"><a href="#671">671</a></td></tr
><tr id="gr_svn1303_672"

><td id="672"><a href="#672">672</a></td></tr
><tr id="gr_svn1303_673"

><td id="673"><a href="#673">673</a></td></tr
><tr id="gr_svn1303_674"

><td id="674"><a href="#674">674</a></td></tr
><tr id="gr_svn1303_675"

><td id="675"><a href="#675">675</a></td></tr
><tr id="gr_svn1303_676"

><td id="676"><a href="#676">676</a></td></tr
><tr id="gr_svn1303_677"

><td id="677"><a href="#677">677</a></td></tr
><tr id="gr_svn1303_678"

><td id="678"><a href="#678">678</a></td></tr
><tr id="gr_svn1303_679"

><td id="679"><a href="#679">679</a></td></tr
><tr id="gr_svn1303_680"

><td id="680"><a href="#680">680</a></td></tr
><tr id="gr_svn1303_681"

><td id="681"><a href="#681">681</a></td></tr
><tr id="gr_svn1303_682"

><td id="682"><a href="#682">682</a></td></tr
><tr id="gr_svn1303_683"

><td id="683"><a href="#683">683</a></td></tr
><tr id="gr_svn1303_684"

><td id="684"><a href="#684">684</a></td></tr
><tr id="gr_svn1303_685"

><td id="685"><a href="#685">685</a></td></tr
><tr id="gr_svn1303_686"

><td id="686"><a href="#686">686</a></td></tr
><tr id="gr_svn1303_687"

><td id="687"><a href="#687">687</a></td></tr
><tr id="gr_svn1303_688"

><td id="688"><a href="#688">688</a></td></tr
><tr id="gr_svn1303_689"

><td id="689"><a href="#689">689</a></td></tr
><tr id="gr_svn1303_690"

><td id="690"><a href="#690">690</a></td></tr
><tr id="gr_svn1303_691"

><td id="691"><a href="#691">691</a></td></tr
><tr id="gr_svn1303_692"

><td id="692"><a href="#692">692</a></td></tr
><tr id="gr_svn1303_693"

><td id="693"><a href="#693">693</a></td></tr
><tr id="gr_svn1303_694"

><td id="694"><a href="#694">694</a></td></tr
><tr id="gr_svn1303_695"

><td id="695"><a href="#695">695</a></td></tr
><tr id="gr_svn1303_696"

><td id="696"><a href="#696">696</a></td></tr
><tr id="gr_svn1303_697"

><td id="697"><a href="#697">697</a></td></tr
><tr id="gr_svn1303_698"

><td id="698"><a href="#698">698</a></td></tr
><tr id="gr_svn1303_699"

><td id="699"><a href="#699">699</a></td></tr
><tr id="gr_svn1303_700"

><td id="700"><a href="#700">700</a></td></tr
><tr id="gr_svn1303_701"

><td id="701"><a href="#701">701</a></td></tr
><tr id="gr_svn1303_702"

><td id="702"><a href="#702">702</a></td></tr
><tr id="gr_svn1303_703"

><td id="703"><a href="#703">703</a></td></tr
><tr id="gr_svn1303_704"

><td id="704"><a href="#704">704</a></td></tr
><tr id="gr_svn1303_705"

><td id="705"><a href="#705">705</a></td></tr
><tr id="gr_svn1303_706"

><td id="706"><a href="#706">706</a></td></tr
><tr id="gr_svn1303_707"

><td id="707"><a href="#707">707</a></td></tr
><tr id="gr_svn1303_708"

><td id="708"><a href="#708">708</a></td></tr
><tr id="gr_svn1303_709"

><td id="709"><a href="#709">709</a></td></tr
><tr id="gr_svn1303_710"

><td id="710"><a href="#710">710</a></td></tr
><tr id="gr_svn1303_711"

><td id="711"><a href="#711">711</a></td></tr
><tr id="gr_svn1303_712"

><td id="712"><a href="#712">712</a></td></tr
><tr id="gr_svn1303_713"

><td id="713"><a href="#713">713</a></td></tr
><tr id="gr_svn1303_714"

><td id="714"><a href="#714">714</a></td></tr
><tr id="gr_svn1303_715"

><td id="715"><a href="#715">715</a></td></tr
><tr id="gr_svn1303_716"

><td id="716"><a href="#716">716</a></td></tr
><tr id="gr_svn1303_717"

><td id="717"><a href="#717">717</a></td></tr
><tr id="gr_svn1303_718"

><td id="718"><a href="#718">718</a></td></tr
><tr id="gr_svn1303_719"

><td id="719"><a href="#719">719</a></td></tr
><tr id="gr_svn1303_720"

><td id="720"><a href="#720">720</a></td></tr
><tr id="gr_svn1303_721"

><td id="721"><a href="#721">721</a></td></tr
><tr id="gr_svn1303_722"

><td id="722"><a href="#722">722</a></td></tr
><tr id="gr_svn1303_723"

><td id="723"><a href="#723">723</a></td></tr
><tr id="gr_svn1303_724"

><td id="724"><a href="#724">724</a></td></tr
><tr id="gr_svn1303_725"

><td id="725"><a href="#725">725</a></td></tr
><tr id="gr_svn1303_726"

><td id="726"><a href="#726">726</a></td></tr
><tr id="gr_svn1303_727"

><td id="727"><a href="#727">727</a></td></tr
><tr id="gr_svn1303_728"

><td id="728"><a href="#728">728</a></td></tr
><tr id="gr_svn1303_729"

><td id="729"><a href="#729">729</a></td></tr
><tr id="gr_svn1303_730"

><td id="730"><a href="#730">730</a></td></tr
><tr id="gr_svn1303_731"

><td id="731"><a href="#731">731</a></td></tr
><tr id="gr_svn1303_732"

><td id="732"><a href="#732">732</a></td></tr
><tr id="gr_svn1303_733"

><td id="733"><a href="#733">733</a></td></tr
><tr id="gr_svn1303_734"

><td id="734"><a href="#734">734</a></td></tr
><tr id="gr_svn1303_735"

><td id="735"><a href="#735">735</a></td></tr
><tr id="gr_svn1303_736"

><td id="736"><a href="#736">736</a></td></tr
><tr id="gr_svn1303_737"

><td id="737"><a href="#737">737</a></td></tr
><tr id="gr_svn1303_738"

><td id="738"><a href="#738">738</a></td></tr
><tr id="gr_svn1303_739"

><td id="739"><a href="#739">739</a></td></tr
><tr id="gr_svn1303_740"

><td id="740"><a href="#740">740</a></td></tr
><tr id="gr_svn1303_741"

><td id="741"><a href="#741">741</a></td></tr
><tr id="gr_svn1303_742"

><td id="742"><a href="#742">742</a></td></tr
><tr id="gr_svn1303_743"

><td id="743"><a href="#743">743</a></td></tr
><tr id="gr_svn1303_744"

><td id="744"><a href="#744">744</a></td></tr
><tr id="gr_svn1303_745"

><td id="745"><a href="#745">745</a></td></tr
><tr id="gr_svn1303_746"

><td id="746"><a href="#746">746</a></td></tr
><tr id="gr_svn1303_747"

><td id="747"><a href="#747">747</a></td></tr
><tr id="gr_svn1303_748"

><td id="748"><a href="#748">748</a></td></tr
><tr id="gr_svn1303_749"

><td id="749"><a href="#749">749</a></td></tr
><tr id="gr_svn1303_750"

><td id="750"><a href="#750">750</a></td></tr
><tr id="gr_svn1303_751"

><td id="751"><a href="#751">751</a></td></tr
><tr id="gr_svn1303_752"

><td id="752"><a href="#752">752</a></td></tr
><tr id="gr_svn1303_753"

><td id="753"><a href="#753">753</a></td></tr
><tr id="gr_svn1303_754"

><td id="754"><a href="#754">754</a></td></tr
><tr id="gr_svn1303_755"

><td id="755"><a href="#755">755</a></td></tr
><tr id="gr_svn1303_756"

><td id="756"><a href="#756">756</a></td></tr
><tr id="gr_svn1303_757"

><td id="757"><a href="#757">757</a></td></tr
><tr id="gr_svn1303_758"

><td id="758"><a href="#758">758</a></td></tr
><tr id="gr_svn1303_759"

><td id="759"><a href="#759">759</a></td></tr
><tr id="gr_svn1303_760"

><td id="760"><a href="#760">760</a></td></tr
><tr id="gr_svn1303_761"

><td id="761"><a href="#761">761</a></td></tr
><tr id="gr_svn1303_762"

><td id="762"><a href="#762">762</a></td></tr
><tr id="gr_svn1303_763"

><td id="763"><a href="#763">763</a></td></tr
><tr id="gr_svn1303_764"

><td id="764"><a href="#764">764</a></td></tr
><tr id="gr_svn1303_765"

><td id="765"><a href="#765">765</a></td></tr
><tr id="gr_svn1303_766"

><td id="766"><a href="#766">766</a></td></tr
><tr id="gr_svn1303_767"

><td id="767"><a href="#767">767</a></td></tr
><tr id="gr_svn1303_768"

><td id="768"><a href="#768">768</a></td></tr
><tr id="gr_svn1303_769"

><td id="769"><a href="#769">769</a></td></tr
><tr id="gr_svn1303_770"

><td id="770"><a href="#770">770</a></td></tr
><tr id="gr_svn1303_771"

><td id="771"><a href="#771">771</a></td></tr
><tr id="gr_svn1303_772"

><td id="772"><a href="#772">772</a></td></tr
><tr id="gr_svn1303_773"

><td id="773"><a href="#773">773</a></td></tr
><tr id="gr_svn1303_774"

><td id="774"><a href="#774">774</a></td></tr
><tr id="gr_svn1303_775"

><td id="775"><a href="#775">775</a></td></tr
><tr id="gr_svn1303_776"

><td id="776"><a href="#776">776</a></td></tr
><tr id="gr_svn1303_777"

><td id="777"><a href="#777">777</a></td></tr
><tr id="gr_svn1303_778"

><td id="778"><a href="#778">778</a></td></tr
><tr id="gr_svn1303_779"

><td id="779"><a href="#779">779</a></td></tr
><tr id="gr_svn1303_780"

><td id="780"><a href="#780">780</a></td></tr
><tr id="gr_svn1303_781"

><td id="781"><a href="#781">781</a></td></tr
><tr id="gr_svn1303_782"

><td id="782"><a href="#782">782</a></td></tr
><tr id="gr_svn1303_783"

><td id="783"><a href="#783">783</a></td></tr
><tr id="gr_svn1303_784"

><td id="784"><a href="#784">784</a></td></tr
><tr id="gr_svn1303_785"

><td id="785"><a href="#785">785</a></td></tr
><tr id="gr_svn1303_786"

><td id="786"><a href="#786">786</a></td></tr
><tr id="gr_svn1303_787"

><td id="787"><a href="#787">787</a></td></tr
><tr id="gr_svn1303_788"

><td id="788"><a href="#788">788</a></td></tr
><tr id="gr_svn1303_789"

><td id="789"><a href="#789">789</a></td></tr
><tr id="gr_svn1303_790"

><td id="790"><a href="#790">790</a></td></tr
><tr id="gr_svn1303_791"

><td id="791"><a href="#791">791</a></td></tr
><tr id="gr_svn1303_792"

><td id="792"><a href="#792">792</a></td></tr
><tr id="gr_svn1303_793"

><td id="793"><a href="#793">793</a></td></tr
><tr id="gr_svn1303_794"

><td id="794"><a href="#794">794</a></td></tr
><tr id="gr_svn1303_795"

><td id="795"><a href="#795">795</a></td></tr
><tr id="gr_svn1303_796"

><td id="796"><a href="#796">796</a></td></tr
><tr id="gr_svn1303_797"

><td id="797"><a href="#797">797</a></td></tr
><tr id="gr_svn1303_798"

><td id="798"><a href="#798">798</a></td></tr
><tr id="gr_svn1303_799"

><td id="799"><a href="#799">799</a></td></tr
><tr id="gr_svn1303_800"

><td id="800"><a href="#800">800</a></td></tr
><tr id="gr_svn1303_801"

><td id="801"><a href="#801">801</a></td></tr
><tr id="gr_svn1303_802"

><td id="802"><a href="#802">802</a></td></tr
><tr id="gr_svn1303_803"

><td id="803"><a href="#803">803</a></td></tr
><tr id="gr_svn1303_804"

><td id="804"><a href="#804">804</a></td></tr
><tr id="gr_svn1303_805"

><td id="805"><a href="#805">805</a></td></tr
><tr id="gr_svn1303_806"

><td id="806"><a href="#806">806</a></td></tr
><tr id="gr_svn1303_807"

><td id="807"><a href="#807">807</a></td></tr
><tr id="gr_svn1303_808"

><td id="808"><a href="#808">808</a></td></tr
><tr id="gr_svn1303_809"

><td id="809"><a href="#809">809</a></td></tr
><tr id="gr_svn1303_810"

><td id="810"><a href="#810">810</a></td></tr
><tr id="gr_svn1303_811"

><td id="811"><a href="#811">811</a></td></tr
><tr id="gr_svn1303_812"

><td id="812"><a href="#812">812</a></td></tr
><tr id="gr_svn1303_813"

><td id="813"><a href="#813">813</a></td></tr
><tr id="gr_svn1303_814"

><td id="814"><a href="#814">814</a></td></tr
><tr id="gr_svn1303_815"

><td id="815"><a href="#815">815</a></td></tr
><tr id="gr_svn1303_816"

><td id="816"><a href="#816">816</a></td></tr
><tr id="gr_svn1303_817"

><td id="817"><a href="#817">817</a></td></tr
><tr id="gr_svn1303_818"

><td id="818"><a href="#818">818</a></td></tr
><tr id="gr_svn1303_819"

><td id="819"><a href="#819">819</a></td></tr
><tr id="gr_svn1303_820"

><td id="820"><a href="#820">820</a></td></tr
><tr id="gr_svn1303_821"

><td id="821"><a href="#821">821</a></td></tr
><tr id="gr_svn1303_822"

><td id="822"><a href="#822">822</a></td></tr
><tr id="gr_svn1303_823"

><td id="823"><a href="#823">823</a></td></tr
><tr id="gr_svn1303_824"

><td id="824"><a href="#824">824</a></td></tr
><tr id="gr_svn1303_825"

><td id="825"><a href="#825">825</a></td></tr
><tr id="gr_svn1303_826"

><td id="826"><a href="#826">826</a></td></tr
><tr id="gr_svn1303_827"

><td id="827"><a href="#827">827</a></td></tr
><tr id="gr_svn1303_828"

><td id="828"><a href="#828">828</a></td></tr
><tr id="gr_svn1303_829"

><td id="829"><a href="#829">829</a></td></tr
><tr id="gr_svn1303_830"

><td id="830"><a href="#830">830</a></td></tr
><tr id="gr_svn1303_831"

><td id="831"><a href="#831">831</a></td></tr
><tr id="gr_svn1303_832"

><td id="832"><a href="#832">832</a></td></tr
><tr id="gr_svn1303_833"

><td id="833"><a href="#833">833</a></td></tr
><tr id="gr_svn1303_834"

><td id="834"><a href="#834">834</a></td></tr
><tr id="gr_svn1303_835"

><td id="835"><a href="#835">835</a></td></tr
><tr id="gr_svn1303_836"

><td id="836"><a href="#836">836</a></td></tr
><tr id="gr_svn1303_837"

><td id="837"><a href="#837">837</a></td></tr
><tr id="gr_svn1303_838"

><td id="838"><a href="#838">838</a></td></tr
><tr id="gr_svn1303_839"

><td id="839"><a href="#839">839</a></td></tr
><tr id="gr_svn1303_840"

><td id="840"><a href="#840">840</a></td></tr
><tr id="gr_svn1303_841"

><td id="841"><a href="#841">841</a></td></tr
><tr id="gr_svn1303_842"

><td id="842"><a href="#842">842</a></td></tr
><tr id="gr_svn1303_843"

><td id="843"><a href="#843">843</a></td></tr
><tr id="gr_svn1303_844"

><td id="844"><a href="#844">844</a></td></tr
><tr id="gr_svn1303_845"

><td id="845"><a href="#845">845</a></td></tr
><tr id="gr_svn1303_846"

><td id="846"><a href="#846">846</a></td></tr
><tr id="gr_svn1303_847"

><td id="847"><a href="#847">847</a></td></tr
><tr id="gr_svn1303_848"

><td id="848"><a href="#848">848</a></td></tr
><tr id="gr_svn1303_849"

><td id="849"><a href="#849">849</a></td></tr
><tr id="gr_svn1303_850"

><td id="850"><a href="#850">850</a></td></tr
><tr id="gr_svn1303_851"

><td id="851"><a href="#851">851</a></td></tr
><tr id="gr_svn1303_852"

><td id="852"><a href="#852">852</a></td></tr
><tr id="gr_svn1303_853"

><td id="853"><a href="#853">853</a></td></tr
><tr id="gr_svn1303_854"

><td id="854"><a href="#854">854</a></td></tr
><tr id="gr_svn1303_855"

><td id="855"><a href="#855">855</a></td></tr
><tr id="gr_svn1303_856"

><td id="856"><a href="#856">856</a></td></tr
><tr id="gr_svn1303_857"

><td id="857"><a href="#857">857</a></td></tr
><tr id="gr_svn1303_858"

><td id="858"><a href="#858">858</a></td></tr
><tr id="gr_svn1303_859"

><td id="859"><a href="#859">859</a></td></tr
><tr id="gr_svn1303_860"

><td id="860"><a href="#860">860</a></td></tr
><tr id="gr_svn1303_861"

><td id="861"><a href="#861">861</a></td></tr
><tr id="gr_svn1303_862"

><td id="862"><a href="#862">862</a></td></tr
><tr id="gr_svn1303_863"

><td id="863"><a href="#863">863</a></td></tr
><tr id="gr_svn1303_864"

><td id="864"><a href="#864">864</a></td></tr
><tr id="gr_svn1303_865"

><td id="865"><a href="#865">865</a></td></tr
><tr id="gr_svn1303_866"

><td id="866"><a href="#866">866</a></td></tr
><tr id="gr_svn1303_867"

><td id="867"><a href="#867">867</a></td></tr
><tr id="gr_svn1303_868"

><td id="868"><a href="#868">868</a></td></tr
><tr id="gr_svn1303_869"

><td id="869"><a href="#869">869</a></td></tr
><tr id="gr_svn1303_870"

><td id="870"><a href="#870">870</a></td></tr
><tr id="gr_svn1303_871"

><td id="871"><a href="#871">871</a></td></tr
><tr id="gr_svn1303_872"

><td id="872"><a href="#872">872</a></td></tr
><tr id="gr_svn1303_873"

><td id="873"><a href="#873">873</a></td></tr
><tr id="gr_svn1303_874"

><td id="874"><a href="#874">874</a></td></tr
><tr id="gr_svn1303_875"

><td id="875"><a href="#875">875</a></td></tr
><tr id="gr_svn1303_876"

><td id="876"><a href="#876">876</a></td></tr
><tr id="gr_svn1303_877"

><td id="877"><a href="#877">877</a></td></tr
><tr id="gr_svn1303_878"

><td id="878"><a href="#878">878</a></td></tr
><tr id="gr_svn1303_879"

><td id="879"><a href="#879">879</a></td></tr
><tr id="gr_svn1303_880"

><td id="880"><a href="#880">880</a></td></tr
><tr id="gr_svn1303_881"

><td id="881"><a href="#881">881</a></td></tr
><tr id="gr_svn1303_882"

><td id="882"><a href="#882">882</a></td></tr
><tr id="gr_svn1303_883"

><td id="883"><a href="#883">883</a></td></tr
><tr id="gr_svn1303_884"

><td id="884"><a href="#884">884</a></td></tr
><tr id="gr_svn1303_885"

><td id="885"><a href="#885">885</a></td></tr
><tr id="gr_svn1303_886"

><td id="886"><a href="#886">886</a></td></tr
><tr id="gr_svn1303_887"

><td id="887"><a href="#887">887</a></td></tr
><tr id="gr_svn1303_888"

><td id="888"><a href="#888">888</a></td></tr
><tr id="gr_svn1303_889"

><td id="889"><a href="#889">889</a></td></tr
><tr id="gr_svn1303_890"

><td id="890"><a href="#890">890</a></td></tr
><tr id="gr_svn1303_891"

><td id="891"><a href="#891">891</a></td></tr
><tr id="gr_svn1303_892"

><td id="892"><a href="#892">892</a></td></tr
><tr id="gr_svn1303_893"

><td id="893"><a href="#893">893</a></td></tr
><tr id="gr_svn1303_894"

><td id="894"><a href="#894">894</a></td></tr
><tr id="gr_svn1303_895"

><td id="895"><a href="#895">895</a></td></tr
><tr id="gr_svn1303_896"

><td id="896"><a href="#896">896</a></td></tr
><tr id="gr_svn1303_897"

><td id="897"><a href="#897">897</a></td></tr
><tr id="gr_svn1303_898"

><td id="898"><a href="#898">898</a></td></tr
><tr id="gr_svn1303_899"

><td id="899"><a href="#899">899</a></td></tr
><tr id="gr_svn1303_900"

><td id="900"><a href="#900">900</a></td></tr
><tr id="gr_svn1303_901"

><td id="901"><a href="#901">901</a></td></tr
><tr id="gr_svn1303_902"

><td id="902"><a href="#902">902</a></td></tr
><tr id="gr_svn1303_903"

><td id="903"><a href="#903">903</a></td></tr
><tr id="gr_svn1303_904"

><td id="904"><a href="#904">904</a></td></tr
><tr id="gr_svn1303_905"

><td id="905"><a href="#905">905</a></td></tr
><tr id="gr_svn1303_906"

><td id="906"><a href="#906">906</a></td></tr
><tr id="gr_svn1303_907"

><td id="907"><a href="#907">907</a></td></tr
><tr id="gr_svn1303_908"

><td id="908"><a href="#908">908</a></td></tr
><tr id="gr_svn1303_909"

><td id="909"><a href="#909">909</a></td></tr
><tr id="gr_svn1303_910"

><td id="910"><a href="#910">910</a></td></tr
><tr id="gr_svn1303_911"

><td id="911"><a href="#911">911</a></td></tr
><tr id="gr_svn1303_912"

><td id="912"><a href="#912">912</a></td></tr
><tr id="gr_svn1303_913"

><td id="913"><a href="#913">913</a></td></tr
><tr id="gr_svn1303_914"

><td id="914"><a href="#914">914</a></td></tr
><tr id="gr_svn1303_915"

><td id="915"><a href="#915">915</a></td></tr
><tr id="gr_svn1303_916"

><td id="916"><a href="#916">916</a></td></tr
><tr id="gr_svn1303_917"

><td id="917"><a href="#917">917</a></td></tr
><tr id="gr_svn1303_918"

><td id="918"><a href="#918">918</a></td></tr
><tr id="gr_svn1303_919"

><td id="919"><a href="#919">919</a></td></tr
><tr id="gr_svn1303_920"

><td id="920"><a href="#920">920</a></td></tr
><tr id="gr_svn1303_921"

><td id="921"><a href="#921">921</a></td></tr
><tr id="gr_svn1303_922"

><td id="922"><a href="#922">922</a></td></tr
><tr id="gr_svn1303_923"

><td id="923"><a href="#923">923</a></td></tr
><tr id="gr_svn1303_924"

><td id="924"><a href="#924">924</a></td></tr
><tr id="gr_svn1303_925"

><td id="925"><a href="#925">925</a></td></tr
><tr id="gr_svn1303_926"

><td id="926"><a href="#926">926</a></td></tr
><tr id="gr_svn1303_927"

><td id="927"><a href="#927">927</a></td></tr
><tr id="gr_svn1303_928"

><td id="928"><a href="#928">928</a></td></tr
><tr id="gr_svn1303_929"

><td id="929"><a href="#929">929</a></td></tr
><tr id="gr_svn1303_930"

><td id="930"><a href="#930">930</a></td></tr
><tr id="gr_svn1303_931"

><td id="931"><a href="#931">931</a></td></tr
><tr id="gr_svn1303_932"

><td id="932"><a href="#932">932</a></td></tr
><tr id="gr_svn1303_933"

><td id="933"><a href="#933">933</a></td></tr
><tr id="gr_svn1303_934"

><td id="934"><a href="#934">934</a></td></tr
><tr id="gr_svn1303_935"

><td id="935"><a href="#935">935</a></td></tr
><tr id="gr_svn1303_936"

><td id="936"><a href="#936">936</a></td></tr
><tr id="gr_svn1303_937"

><td id="937"><a href="#937">937</a></td></tr
><tr id="gr_svn1303_938"

><td id="938"><a href="#938">938</a></td></tr
><tr id="gr_svn1303_939"

><td id="939"><a href="#939">939</a></td></tr
><tr id="gr_svn1303_940"

><td id="940"><a href="#940">940</a></td></tr
><tr id="gr_svn1303_941"

><td id="941"><a href="#941">941</a></td></tr
><tr id="gr_svn1303_942"

><td id="942"><a href="#942">942</a></td></tr
><tr id="gr_svn1303_943"

><td id="943"><a href="#943">943</a></td></tr
><tr id="gr_svn1303_944"

><td id="944"><a href="#944">944</a></td></tr
><tr id="gr_svn1303_945"

><td id="945"><a href="#945">945</a></td></tr
><tr id="gr_svn1303_946"

><td id="946"><a href="#946">946</a></td></tr
><tr id="gr_svn1303_947"

><td id="947"><a href="#947">947</a></td></tr
><tr id="gr_svn1303_948"

><td id="948"><a href="#948">948</a></td></tr
><tr id="gr_svn1303_949"

><td id="949"><a href="#949">949</a></td></tr
><tr id="gr_svn1303_950"

><td id="950"><a href="#950">950</a></td></tr
><tr id="gr_svn1303_951"

><td id="951"><a href="#951">951</a></td></tr
><tr id="gr_svn1303_952"

><td id="952"><a href="#952">952</a></td></tr
><tr id="gr_svn1303_953"

><td id="953"><a href="#953">953</a></td></tr
><tr id="gr_svn1303_954"

><td id="954"><a href="#954">954</a></td></tr
><tr id="gr_svn1303_955"

><td id="955"><a href="#955">955</a></td></tr
><tr id="gr_svn1303_956"

><td id="956"><a href="#956">956</a></td></tr
><tr id="gr_svn1303_957"

><td id="957"><a href="#957">957</a></td></tr
><tr id="gr_svn1303_958"

><td id="958"><a href="#958">958</a></td></tr
><tr id="gr_svn1303_959"

><td id="959"><a href="#959">959</a></td></tr
><tr id="gr_svn1303_960"

><td id="960"><a href="#960">960</a></td></tr
><tr id="gr_svn1303_961"

><td id="961"><a href="#961">961</a></td></tr
><tr id="gr_svn1303_962"

><td id="962"><a href="#962">962</a></td></tr
><tr id="gr_svn1303_963"

><td id="963"><a href="#963">963</a></td></tr
><tr id="gr_svn1303_964"

><td id="964"><a href="#964">964</a></td></tr
><tr id="gr_svn1303_965"

><td id="965"><a href="#965">965</a></td></tr
><tr id="gr_svn1303_966"

><td id="966"><a href="#966">966</a></td></tr
><tr id="gr_svn1303_967"

><td id="967"><a href="#967">967</a></td></tr
><tr id="gr_svn1303_968"

><td id="968"><a href="#968">968</a></td></tr
><tr id="gr_svn1303_969"

><td id="969"><a href="#969">969</a></td></tr
><tr id="gr_svn1303_970"

><td id="970"><a href="#970">970</a></td></tr
><tr id="gr_svn1303_971"

><td id="971"><a href="#971">971</a></td></tr
><tr id="gr_svn1303_972"

><td id="972"><a href="#972">972</a></td></tr
><tr id="gr_svn1303_973"

><td id="973"><a href="#973">973</a></td></tr
><tr id="gr_svn1303_974"

><td id="974"><a href="#974">974</a></td></tr
><tr id="gr_svn1303_975"

><td id="975"><a href="#975">975</a></td></tr
><tr id="gr_svn1303_976"

><td id="976"><a href="#976">976</a></td></tr
><tr id="gr_svn1303_977"

><td id="977"><a href="#977">977</a></td></tr
><tr id="gr_svn1303_978"

><td id="978"><a href="#978">978</a></td></tr
><tr id="gr_svn1303_979"

><td id="979"><a href="#979">979</a></td></tr
><tr id="gr_svn1303_980"

><td id="980"><a href="#980">980</a></td></tr
><tr id="gr_svn1303_981"

><td id="981"><a href="#981">981</a></td></tr
><tr id="gr_svn1303_982"

><td id="982"><a href="#982">982</a></td></tr
><tr id="gr_svn1303_983"

><td id="983"><a href="#983">983</a></td></tr
><tr id="gr_svn1303_984"

><td id="984"><a href="#984">984</a></td></tr
><tr id="gr_svn1303_985"

><td id="985"><a href="#985">985</a></td></tr
><tr id="gr_svn1303_986"

><td id="986"><a href="#986">986</a></td></tr
><tr id="gr_svn1303_987"

><td id="987"><a href="#987">987</a></td></tr
><tr id="gr_svn1303_988"

><td id="988"><a href="#988">988</a></td></tr
><tr id="gr_svn1303_989"

><td id="989"><a href="#989">989</a></td></tr
><tr id="gr_svn1303_990"

><td id="990"><a href="#990">990</a></td></tr
><tr id="gr_svn1303_991"

><td id="991"><a href="#991">991</a></td></tr
><tr id="gr_svn1303_992"

><td id="992"><a href="#992">992</a></td></tr
><tr id="gr_svn1303_993"

><td id="993"><a href="#993">993</a></td></tr
><tr id="gr_svn1303_994"

><td id="994"><a href="#994">994</a></td></tr
><tr id="gr_svn1303_995"

><td id="995"><a href="#995">995</a></td></tr
><tr id="gr_svn1303_996"

><td id="996"><a href="#996">996</a></td></tr
><tr id="gr_svn1303_997"

><td id="997"><a href="#997">997</a></td></tr
><tr id="gr_svn1303_998"

><td id="998"><a href="#998">998</a></td></tr
><tr id="gr_svn1303_999"

><td id="999"><a href="#999">999</a></td></tr
><tr id="gr_svn1303_1000"

><td id="1000"><a href="#1000">1000</a></td></tr
><tr id="gr_svn1303_1001"

><td id="1001"><a href="#1001">1001</a></td></tr
><tr id="gr_svn1303_1002"

><td id="1002"><a href="#1002">1002</a></td></tr
><tr id="gr_svn1303_1003"

><td id="1003"><a href="#1003">1003</a></td></tr
><tr id="gr_svn1303_1004"

><td id="1004"><a href="#1004">1004</a></td></tr
><tr id="gr_svn1303_1005"

><td id="1005"><a href="#1005">1005</a></td></tr
><tr id="gr_svn1303_1006"

><td id="1006"><a href="#1006">1006</a></td></tr
><tr id="gr_svn1303_1007"

><td id="1007"><a href="#1007">1007</a></td></tr
><tr id="gr_svn1303_1008"

><td id="1008"><a href="#1008">1008</a></td></tr
><tr id="gr_svn1303_1009"

><td id="1009"><a href="#1009">1009</a></td></tr
><tr id="gr_svn1303_1010"

><td id="1010"><a href="#1010">1010</a></td></tr
><tr id="gr_svn1303_1011"

><td id="1011"><a href="#1011">1011</a></td></tr
><tr id="gr_svn1303_1012"

><td id="1012"><a href="#1012">1012</a></td></tr
><tr id="gr_svn1303_1013"

><td id="1013"><a href="#1013">1013</a></td></tr
><tr id="gr_svn1303_1014"

><td id="1014"><a href="#1014">1014</a></td></tr
><tr id="gr_svn1303_1015"

><td id="1015"><a href="#1015">1015</a></td></tr
><tr id="gr_svn1303_1016"

><td id="1016"><a href="#1016">1016</a></td></tr
><tr id="gr_svn1303_1017"

><td id="1017"><a href="#1017">1017</a></td></tr
><tr id="gr_svn1303_1018"

><td id="1018"><a href="#1018">1018</a></td></tr
><tr id="gr_svn1303_1019"

><td id="1019"><a href="#1019">1019</a></td></tr
><tr id="gr_svn1303_1020"

><td id="1020"><a href="#1020">1020</a></td></tr
><tr id="gr_svn1303_1021"

><td id="1021"><a href="#1021">1021</a></td></tr
><tr id="gr_svn1303_1022"

><td id="1022"><a href="#1022">1022</a></td></tr
><tr id="gr_svn1303_1023"

><td id="1023"><a href="#1023">1023</a></td></tr
><tr id="gr_svn1303_1024"

><td id="1024"><a href="#1024">1024</a></td></tr
><tr id="gr_svn1303_1025"

><td id="1025"><a href="#1025">1025</a></td></tr
><tr id="gr_svn1303_1026"

><td id="1026"><a href="#1026">1026</a></td></tr
><tr id="gr_svn1303_1027"

><td id="1027"><a href="#1027">1027</a></td></tr
><tr id="gr_svn1303_1028"

><td id="1028"><a href="#1028">1028</a></td></tr
><tr id="gr_svn1303_1029"

><td id="1029"><a href="#1029">1029</a></td></tr
><tr id="gr_svn1303_1030"

><td id="1030"><a href="#1030">1030</a></td></tr
><tr id="gr_svn1303_1031"

><td id="1031"><a href="#1031">1031</a></td></tr
><tr id="gr_svn1303_1032"

><td id="1032"><a href="#1032">1032</a></td></tr
><tr id="gr_svn1303_1033"

><td id="1033"><a href="#1033">1033</a></td></tr
><tr id="gr_svn1303_1034"

><td id="1034"><a href="#1034">1034</a></td></tr
><tr id="gr_svn1303_1035"

><td id="1035"><a href="#1035">1035</a></td></tr
><tr id="gr_svn1303_1036"

><td id="1036"><a href="#1036">1036</a></td></tr
><tr id="gr_svn1303_1037"

><td id="1037"><a href="#1037">1037</a></td></tr
><tr id="gr_svn1303_1038"

><td id="1038"><a href="#1038">1038</a></td></tr
><tr id="gr_svn1303_1039"

><td id="1039"><a href="#1039">1039</a></td></tr
><tr id="gr_svn1303_1040"

><td id="1040"><a href="#1040">1040</a></td></tr
><tr id="gr_svn1303_1041"

><td id="1041"><a href="#1041">1041</a></td></tr
><tr id="gr_svn1303_1042"

><td id="1042"><a href="#1042">1042</a></td></tr
><tr id="gr_svn1303_1043"

><td id="1043"><a href="#1043">1043</a></td></tr
><tr id="gr_svn1303_1044"

><td id="1044"><a href="#1044">1044</a></td></tr
><tr id="gr_svn1303_1045"

><td id="1045"><a href="#1045">1045</a></td></tr
><tr id="gr_svn1303_1046"

><td id="1046"><a href="#1046">1046</a></td></tr
><tr id="gr_svn1303_1047"

><td id="1047"><a href="#1047">1047</a></td></tr
><tr id="gr_svn1303_1048"

><td id="1048"><a href="#1048">1048</a></td></tr
><tr id="gr_svn1303_1049"

><td id="1049"><a href="#1049">1049</a></td></tr
><tr id="gr_svn1303_1050"

><td id="1050"><a href="#1050">1050</a></td></tr
><tr id="gr_svn1303_1051"

><td id="1051"><a href="#1051">1051</a></td></tr
><tr id="gr_svn1303_1052"

><td id="1052"><a href="#1052">1052</a></td></tr
><tr id="gr_svn1303_1053"

><td id="1053"><a href="#1053">1053</a></td></tr
><tr id="gr_svn1303_1054"

><td id="1054"><a href="#1054">1054</a></td></tr
><tr id="gr_svn1303_1055"

><td id="1055"><a href="#1055">1055</a></td></tr
><tr id="gr_svn1303_1056"

><td id="1056"><a href="#1056">1056</a></td></tr
><tr id="gr_svn1303_1057"

><td id="1057"><a href="#1057">1057</a></td></tr
><tr id="gr_svn1303_1058"

><td id="1058"><a href="#1058">1058</a></td></tr
><tr id="gr_svn1303_1059"

><td id="1059"><a href="#1059">1059</a></td></tr
><tr id="gr_svn1303_1060"

><td id="1060"><a href="#1060">1060</a></td></tr
><tr id="gr_svn1303_1061"

><td id="1061"><a href="#1061">1061</a></td></tr
><tr id="gr_svn1303_1062"

><td id="1062"><a href="#1062">1062</a></td></tr
><tr id="gr_svn1303_1063"

><td id="1063"><a href="#1063">1063</a></td></tr
><tr id="gr_svn1303_1064"

><td id="1064"><a href="#1064">1064</a></td></tr
><tr id="gr_svn1303_1065"

><td id="1065"><a href="#1065">1065</a></td></tr
><tr id="gr_svn1303_1066"

><td id="1066"><a href="#1066">1066</a></td></tr
><tr id="gr_svn1303_1067"

><td id="1067"><a href="#1067">1067</a></td></tr
><tr id="gr_svn1303_1068"

><td id="1068"><a href="#1068">1068</a></td></tr
><tr id="gr_svn1303_1069"

><td id="1069"><a href="#1069">1069</a></td></tr
><tr id="gr_svn1303_1070"

><td id="1070"><a href="#1070">1070</a></td></tr
><tr id="gr_svn1303_1071"

><td id="1071"><a href="#1071">1071</a></td></tr
><tr id="gr_svn1303_1072"

><td id="1072"><a href="#1072">1072</a></td></tr
><tr id="gr_svn1303_1073"

><td id="1073"><a href="#1073">1073</a></td></tr
><tr id="gr_svn1303_1074"

><td id="1074"><a href="#1074">1074</a></td></tr
><tr id="gr_svn1303_1075"

><td id="1075"><a href="#1075">1075</a></td></tr
><tr id="gr_svn1303_1076"

><td id="1076"><a href="#1076">1076</a></td></tr
><tr id="gr_svn1303_1077"

><td id="1077"><a href="#1077">1077</a></td></tr
><tr id="gr_svn1303_1078"

><td id="1078"><a href="#1078">1078</a></td></tr
><tr id="gr_svn1303_1079"

><td id="1079"><a href="#1079">1079</a></td></tr
><tr id="gr_svn1303_1080"

><td id="1080"><a href="#1080">1080</a></td></tr
><tr id="gr_svn1303_1081"

><td id="1081"><a href="#1081">1081</a></td></tr
><tr id="gr_svn1303_1082"

><td id="1082"><a href="#1082">1082</a></td></tr
><tr id="gr_svn1303_1083"

><td id="1083"><a href="#1083">1083</a></td></tr
><tr id="gr_svn1303_1084"

><td id="1084"><a href="#1084">1084</a></td></tr
><tr id="gr_svn1303_1085"

><td id="1085"><a href="#1085">1085</a></td></tr
><tr id="gr_svn1303_1086"

><td id="1086"><a href="#1086">1086</a></td></tr
><tr id="gr_svn1303_1087"

><td id="1087"><a href="#1087">1087</a></td></tr
><tr id="gr_svn1303_1088"

><td id="1088"><a href="#1088">1088</a></td></tr
><tr id="gr_svn1303_1089"

><td id="1089"><a href="#1089">1089</a></td></tr
><tr id="gr_svn1303_1090"

><td id="1090"><a href="#1090">1090</a></td></tr
><tr id="gr_svn1303_1091"

><td id="1091"><a href="#1091">1091</a></td></tr
><tr id="gr_svn1303_1092"

><td id="1092"><a href="#1092">1092</a></td></tr
><tr id="gr_svn1303_1093"

><td id="1093"><a href="#1093">1093</a></td></tr
><tr id="gr_svn1303_1094"

><td id="1094"><a href="#1094">1094</a></td></tr
><tr id="gr_svn1303_1095"

><td id="1095"><a href="#1095">1095</a></td></tr
><tr id="gr_svn1303_1096"

><td id="1096"><a href="#1096">1096</a></td></tr
><tr id="gr_svn1303_1097"

><td id="1097"><a href="#1097">1097</a></td></tr
><tr id="gr_svn1303_1098"

><td id="1098"><a href="#1098">1098</a></td></tr
><tr id="gr_svn1303_1099"

><td id="1099"><a href="#1099">1099</a></td></tr
><tr id="gr_svn1303_1100"

><td id="1100"><a href="#1100">1100</a></td></tr
><tr id="gr_svn1303_1101"

><td id="1101"><a href="#1101">1101</a></td></tr
><tr id="gr_svn1303_1102"

><td id="1102"><a href="#1102">1102</a></td></tr
><tr id="gr_svn1303_1103"

><td id="1103"><a href="#1103">1103</a></td></tr
><tr id="gr_svn1303_1104"

><td id="1104"><a href="#1104">1104</a></td></tr
><tr id="gr_svn1303_1105"

><td id="1105"><a href="#1105">1105</a></td></tr
><tr id="gr_svn1303_1106"

><td id="1106"><a href="#1106">1106</a></td></tr
><tr id="gr_svn1303_1107"

><td id="1107"><a href="#1107">1107</a></td></tr
><tr id="gr_svn1303_1108"

><td id="1108"><a href="#1108">1108</a></td></tr
><tr id="gr_svn1303_1109"

><td id="1109"><a href="#1109">1109</a></td></tr
><tr id="gr_svn1303_1110"

><td id="1110"><a href="#1110">1110</a></td></tr
><tr id="gr_svn1303_1111"

><td id="1111"><a href="#1111">1111</a></td></tr
><tr id="gr_svn1303_1112"

><td id="1112"><a href="#1112">1112</a></td></tr
><tr id="gr_svn1303_1113"

><td id="1113"><a href="#1113">1113</a></td></tr
><tr id="gr_svn1303_1114"

><td id="1114"><a href="#1114">1114</a></td></tr
><tr id="gr_svn1303_1115"

><td id="1115"><a href="#1115">1115</a></td></tr
><tr id="gr_svn1303_1116"

><td id="1116"><a href="#1116">1116</a></td></tr
><tr id="gr_svn1303_1117"

><td id="1117"><a href="#1117">1117</a></td></tr
><tr id="gr_svn1303_1118"

><td id="1118"><a href="#1118">1118</a></td></tr
><tr id="gr_svn1303_1119"

><td id="1119"><a href="#1119">1119</a></td></tr
><tr id="gr_svn1303_1120"

><td id="1120"><a href="#1120">1120</a></td></tr
><tr id="gr_svn1303_1121"

><td id="1121"><a href="#1121">1121</a></td></tr
><tr id="gr_svn1303_1122"

><td id="1122"><a href="#1122">1122</a></td></tr
><tr id="gr_svn1303_1123"

><td id="1123"><a href="#1123">1123</a></td></tr
><tr id="gr_svn1303_1124"

><td id="1124"><a href="#1124">1124</a></td></tr
><tr id="gr_svn1303_1125"

><td id="1125"><a href="#1125">1125</a></td></tr
><tr id="gr_svn1303_1126"

><td id="1126"><a href="#1126">1126</a></td></tr
><tr id="gr_svn1303_1127"

><td id="1127"><a href="#1127">1127</a></td></tr
><tr id="gr_svn1303_1128"

><td id="1128"><a href="#1128">1128</a></td></tr
><tr id="gr_svn1303_1129"

><td id="1129"><a href="#1129">1129</a></td></tr
><tr id="gr_svn1303_1130"

><td id="1130"><a href="#1130">1130</a></td></tr
><tr id="gr_svn1303_1131"

><td id="1131"><a href="#1131">1131</a></td></tr
><tr id="gr_svn1303_1132"

><td id="1132"><a href="#1132">1132</a></td></tr
><tr id="gr_svn1303_1133"

><td id="1133"><a href="#1133">1133</a></td></tr
><tr id="gr_svn1303_1134"

><td id="1134"><a href="#1134">1134</a></td></tr
><tr id="gr_svn1303_1135"

><td id="1135"><a href="#1135">1135</a></td></tr
><tr id="gr_svn1303_1136"

><td id="1136"><a href="#1136">1136</a></td></tr
><tr id="gr_svn1303_1137"

><td id="1137"><a href="#1137">1137</a></td></tr
><tr id="gr_svn1303_1138"

><td id="1138"><a href="#1138">1138</a></td></tr
><tr id="gr_svn1303_1139"

><td id="1139"><a href="#1139">1139</a></td></tr
><tr id="gr_svn1303_1140"

><td id="1140"><a href="#1140">1140</a></td></tr
><tr id="gr_svn1303_1141"

><td id="1141"><a href="#1141">1141</a></td></tr
><tr id="gr_svn1303_1142"

><td id="1142"><a href="#1142">1142</a></td></tr
><tr id="gr_svn1303_1143"

><td id="1143"><a href="#1143">1143</a></td></tr
><tr id="gr_svn1303_1144"

><td id="1144"><a href="#1144">1144</a></td></tr
><tr id="gr_svn1303_1145"

><td id="1145"><a href="#1145">1145</a></td></tr
><tr id="gr_svn1303_1146"

><td id="1146"><a href="#1146">1146</a></td></tr
><tr id="gr_svn1303_1147"

><td id="1147"><a href="#1147">1147</a></td></tr
><tr id="gr_svn1303_1148"

><td id="1148"><a href="#1148">1148</a></td></tr
><tr id="gr_svn1303_1149"

><td id="1149"><a href="#1149">1149</a></td></tr
><tr id="gr_svn1303_1150"

><td id="1150"><a href="#1150">1150</a></td></tr
><tr id="gr_svn1303_1151"

><td id="1151"><a href="#1151">1151</a></td></tr
><tr id="gr_svn1303_1152"

><td id="1152"><a href="#1152">1152</a></td></tr
><tr id="gr_svn1303_1153"

><td id="1153"><a href="#1153">1153</a></td></tr
><tr id="gr_svn1303_1154"

><td id="1154"><a href="#1154">1154</a></td></tr
><tr id="gr_svn1303_1155"

><td id="1155"><a href="#1155">1155</a></td></tr
><tr id="gr_svn1303_1156"

><td id="1156"><a href="#1156">1156</a></td></tr
><tr id="gr_svn1303_1157"

><td id="1157"><a href="#1157">1157</a></td></tr
><tr id="gr_svn1303_1158"

><td id="1158"><a href="#1158">1158</a></td></tr
><tr id="gr_svn1303_1159"

><td id="1159"><a href="#1159">1159</a></td></tr
><tr id="gr_svn1303_1160"

><td id="1160"><a href="#1160">1160</a></td></tr
><tr id="gr_svn1303_1161"

><td id="1161"><a href="#1161">1161</a></td></tr
><tr id="gr_svn1303_1162"

><td id="1162"><a href="#1162">1162</a></td></tr
><tr id="gr_svn1303_1163"

><td id="1163"><a href="#1163">1163</a></td></tr
><tr id="gr_svn1303_1164"

><td id="1164"><a href="#1164">1164</a></td></tr
><tr id="gr_svn1303_1165"

><td id="1165"><a href="#1165">1165</a></td></tr
><tr id="gr_svn1303_1166"

><td id="1166"><a href="#1166">1166</a></td></tr
><tr id="gr_svn1303_1167"

><td id="1167"><a href="#1167">1167</a></td></tr
><tr id="gr_svn1303_1168"

><td id="1168"><a href="#1168">1168</a></td></tr
><tr id="gr_svn1303_1169"

><td id="1169"><a href="#1169">1169</a></td></tr
><tr id="gr_svn1303_1170"

><td id="1170"><a href="#1170">1170</a></td></tr
><tr id="gr_svn1303_1171"

><td id="1171"><a href="#1171">1171</a></td></tr
><tr id="gr_svn1303_1172"

><td id="1172"><a href="#1172">1172</a></td></tr
><tr id="gr_svn1303_1173"

><td id="1173"><a href="#1173">1173</a></td></tr
><tr id="gr_svn1303_1174"

><td id="1174"><a href="#1174">1174</a></td></tr
><tr id="gr_svn1303_1175"

><td id="1175"><a href="#1175">1175</a></td></tr
><tr id="gr_svn1303_1176"

><td id="1176"><a href="#1176">1176</a></td></tr
><tr id="gr_svn1303_1177"

><td id="1177"><a href="#1177">1177</a></td></tr
><tr id="gr_svn1303_1178"

><td id="1178"><a href="#1178">1178</a></td></tr
><tr id="gr_svn1303_1179"

><td id="1179"><a href="#1179">1179</a></td></tr
><tr id="gr_svn1303_1180"

><td id="1180"><a href="#1180">1180</a></td></tr
><tr id="gr_svn1303_1181"

><td id="1181"><a href="#1181">1181</a></td></tr
><tr id="gr_svn1303_1182"

><td id="1182"><a href="#1182">1182</a></td></tr
><tr id="gr_svn1303_1183"

><td id="1183"><a href="#1183">1183</a></td></tr
><tr id="gr_svn1303_1184"

><td id="1184"><a href="#1184">1184</a></td></tr
><tr id="gr_svn1303_1185"

><td id="1185"><a href="#1185">1185</a></td></tr
><tr id="gr_svn1303_1186"

><td id="1186"><a href="#1186">1186</a></td></tr
><tr id="gr_svn1303_1187"

><td id="1187"><a href="#1187">1187</a></td></tr
><tr id="gr_svn1303_1188"

><td id="1188"><a href="#1188">1188</a></td></tr
><tr id="gr_svn1303_1189"

><td id="1189"><a href="#1189">1189</a></td></tr
><tr id="gr_svn1303_1190"

><td id="1190"><a href="#1190">1190</a></td></tr
><tr id="gr_svn1303_1191"

><td id="1191"><a href="#1191">1191</a></td></tr
><tr id="gr_svn1303_1192"

><td id="1192"><a href="#1192">1192</a></td></tr
><tr id="gr_svn1303_1193"

><td id="1193"><a href="#1193">1193</a></td></tr
><tr id="gr_svn1303_1194"

><td id="1194"><a href="#1194">1194</a></td></tr
><tr id="gr_svn1303_1195"

><td id="1195"><a href="#1195">1195</a></td></tr
><tr id="gr_svn1303_1196"

><td id="1196"><a href="#1196">1196</a></td></tr
><tr id="gr_svn1303_1197"

><td id="1197"><a href="#1197">1197</a></td></tr
><tr id="gr_svn1303_1198"

><td id="1198"><a href="#1198">1198</a></td></tr
><tr id="gr_svn1303_1199"

><td id="1199"><a href="#1199">1199</a></td></tr
><tr id="gr_svn1303_1200"

><td id="1200"><a href="#1200">1200</a></td></tr
><tr id="gr_svn1303_1201"

><td id="1201"><a href="#1201">1201</a></td></tr
><tr id="gr_svn1303_1202"

><td id="1202"><a href="#1202">1202</a></td></tr
><tr id="gr_svn1303_1203"

><td id="1203"><a href="#1203">1203</a></td></tr
><tr id="gr_svn1303_1204"

><td id="1204"><a href="#1204">1204</a></td></tr
><tr id="gr_svn1303_1205"

><td id="1205"><a href="#1205">1205</a></td></tr
><tr id="gr_svn1303_1206"

><td id="1206"><a href="#1206">1206</a></td></tr
><tr id="gr_svn1303_1207"

><td id="1207"><a href="#1207">1207</a></td></tr
><tr id="gr_svn1303_1208"

><td id="1208"><a href="#1208">1208</a></td></tr
><tr id="gr_svn1303_1209"

><td id="1209"><a href="#1209">1209</a></td></tr
><tr id="gr_svn1303_1210"

><td id="1210"><a href="#1210">1210</a></td></tr
><tr id="gr_svn1303_1211"

><td id="1211"><a href="#1211">1211</a></td></tr
><tr id="gr_svn1303_1212"

><td id="1212"><a href="#1212">1212</a></td></tr
><tr id="gr_svn1303_1213"

><td id="1213"><a href="#1213">1213</a></td></tr
><tr id="gr_svn1303_1214"

><td id="1214"><a href="#1214">1214</a></td></tr
><tr id="gr_svn1303_1215"

><td id="1215"><a href="#1215">1215</a></td></tr
><tr id="gr_svn1303_1216"

><td id="1216"><a href="#1216">1216</a></td></tr
><tr id="gr_svn1303_1217"

><td id="1217"><a href="#1217">1217</a></td></tr
><tr id="gr_svn1303_1218"

><td id="1218"><a href="#1218">1218</a></td></tr
><tr id="gr_svn1303_1219"

><td id="1219"><a href="#1219">1219</a></td></tr
><tr id="gr_svn1303_1220"

><td id="1220"><a href="#1220">1220</a></td></tr
><tr id="gr_svn1303_1221"

><td id="1221"><a href="#1221">1221</a></td></tr
><tr id="gr_svn1303_1222"

><td id="1222"><a href="#1222">1222</a></td></tr
><tr id="gr_svn1303_1223"

><td id="1223"><a href="#1223">1223</a></td></tr
><tr id="gr_svn1303_1224"

><td id="1224"><a href="#1224">1224</a></td></tr
><tr id="gr_svn1303_1225"

><td id="1225"><a href="#1225">1225</a></td></tr
><tr id="gr_svn1303_1226"

><td id="1226"><a href="#1226">1226</a></td></tr
><tr id="gr_svn1303_1227"

><td id="1227"><a href="#1227">1227</a></td></tr
><tr id="gr_svn1303_1228"

><td id="1228"><a href="#1228">1228</a></td></tr
><tr id="gr_svn1303_1229"

><td id="1229"><a href="#1229">1229</a></td></tr
><tr id="gr_svn1303_1230"

><td id="1230"><a href="#1230">1230</a></td></tr
><tr id="gr_svn1303_1231"

><td id="1231"><a href="#1231">1231</a></td></tr
><tr id="gr_svn1303_1232"

><td id="1232"><a href="#1232">1232</a></td></tr
><tr id="gr_svn1303_1233"

><td id="1233"><a href="#1233">1233</a></td></tr
><tr id="gr_svn1303_1234"

><td id="1234"><a href="#1234">1234</a></td></tr
><tr id="gr_svn1303_1235"

><td id="1235"><a href="#1235">1235</a></td></tr
><tr id="gr_svn1303_1236"

><td id="1236"><a href="#1236">1236</a></td></tr
><tr id="gr_svn1303_1237"

><td id="1237"><a href="#1237">1237</a></td></tr
><tr id="gr_svn1303_1238"

><td id="1238"><a href="#1238">1238</a></td></tr
><tr id="gr_svn1303_1239"

><td id="1239"><a href="#1239">1239</a></td></tr
><tr id="gr_svn1303_1240"

><td id="1240"><a href="#1240">1240</a></td></tr
><tr id="gr_svn1303_1241"

><td id="1241"><a href="#1241">1241</a></td></tr
><tr id="gr_svn1303_1242"

><td id="1242"><a href="#1242">1242</a></td></tr
><tr id="gr_svn1303_1243"

><td id="1243"><a href="#1243">1243</a></td></tr
><tr id="gr_svn1303_1244"

><td id="1244"><a href="#1244">1244</a></td></tr
><tr id="gr_svn1303_1245"

><td id="1245"><a href="#1245">1245</a></td></tr
><tr id="gr_svn1303_1246"

><td id="1246"><a href="#1246">1246</a></td></tr
><tr id="gr_svn1303_1247"

><td id="1247"><a href="#1247">1247</a></td></tr
><tr id="gr_svn1303_1248"

><td id="1248"><a href="#1248">1248</a></td></tr
><tr id="gr_svn1303_1249"

><td id="1249"><a href="#1249">1249</a></td></tr
><tr id="gr_svn1303_1250"

><td id="1250"><a href="#1250">1250</a></td></tr
><tr id="gr_svn1303_1251"

><td id="1251"><a href="#1251">1251</a></td></tr
><tr id="gr_svn1303_1252"

><td id="1252"><a href="#1252">1252</a></td></tr
><tr id="gr_svn1303_1253"

><td id="1253"><a href="#1253">1253</a></td></tr
><tr id="gr_svn1303_1254"

><td id="1254"><a href="#1254">1254</a></td></tr
><tr id="gr_svn1303_1255"

><td id="1255"><a href="#1255">1255</a></td></tr
><tr id="gr_svn1303_1256"

><td id="1256"><a href="#1256">1256</a></td></tr
><tr id="gr_svn1303_1257"

><td id="1257"><a href="#1257">1257</a></td></tr
><tr id="gr_svn1303_1258"

><td id="1258"><a href="#1258">1258</a></td></tr
><tr id="gr_svn1303_1259"

><td id="1259"><a href="#1259">1259</a></td></tr
><tr id="gr_svn1303_1260"

><td id="1260"><a href="#1260">1260</a></td></tr
><tr id="gr_svn1303_1261"

><td id="1261"><a href="#1261">1261</a></td></tr
><tr id="gr_svn1303_1262"

><td id="1262"><a href="#1262">1262</a></td></tr
><tr id="gr_svn1303_1263"

><td id="1263"><a href="#1263">1263</a></td></tr
><tr id="gr_svn1303_1264"

><td id="1264"><a href="#1264">1264</a></td></tr
><tr id="gr_svn1303_1265"

><td id="1265"><a href="#1265">1265</a></td></tr
><tr id="gr_svn1303_1266"

><td id="1266"><a href="#1266">1266</a></td></tr
><tr id="gr_svn1303_1267"

><td id="1267"><a href="#1267">1267</a></td></tr
><tr id="gr_svn1303_1268"

><td id="1268"><a href="#1268">1268</a></td></tr
><tr id="gr_svn1303_1269"

><td id="1269"><a href="#1269">1269</a></td></tr
><tr id="gr_svn1303_1270"

><td id="1270"><a href="#1270">1270</a></td></tr
><tr id="gr_svn1303_1271"

><td id="1271"><a href="#1271">1271</a></td></tr
><tr id="gr_svn1303_1272"

><td id="1272"><a href="#1272">1272</a></td></tr
><tr id="gr_svn1303_1273"

><td id="1273"><a href="#1273">1273</a></td></tr
><tr id="gr_svn1303_1274"

><td id="1274"><a href="#1274">1274</a></td></tr
><tr id="gr_svn1303_1275"

><td id="1275"><a href="#1275">1275</a></td></tr
><tr id="gr_svn1303_1276"

><td id="1276"><a href="#1276">1276</a></td></tr
><tr id="gr_svn1303_1277"

><td id="1277"><a href="#1277">1277</a></td></tr
><tr id="gr_svn1303_1278"

><td id="1278"><a href="#1278">1278</a></td></tr
><tr id="gr_svn1303_1279"

><td id="1279"><a href="#1279">1279</a></td></tr
><tr id="gr_svn1303_1280"

><td id="1280"><a href="#1280">1280</a></td></tr
><tr id="gr_svn1303_1281"

><td id="1281"><a href="#1281">1281</a></td></tr
><tr id="gr_svn1303_1282"

><td id="1282"><a href="#1282">1282</a></td></tr
><tr id="gr_svn1303_1283"

><td id="1283"><a href="#1283">1283</a></td></tr
><tr id="gr_svn1303_1284"

><td id="1284"><a href="#1284">1284</a></td></tr
><tr id="gr_svn1303_1285"

><td id="1285"><a href="#1285">1285</a></td></tr
><tr id="gr_svn1303_1286"

><td id="1286"><a href="#1286">1286</a></td></tr
><tr id="gr_svn1303_1287"

><td id="1287"><a href="#1287">1287</a></td></tr
><tr id="gr_svn1303_1288"

><td id="1288"><a href="#1288">1288</a></td></tr
><tr id="gr_svn1303_1289"

><td id="1289"><a href="#1289">1289</a></td></tr
><tr id="gr_svn1303_1290"

><td id="1290"><a href="#1290">1290</a></td></tr
><tr id="gr_svn1303_1291"

><td id="1291"><a href="#1291">1291</a></td></tr
><tr id="gr_svn1303_1292"

><td id="1292"><a href="#1292">1292</a></td></tr
><tr id="gr_svn1303_1293"

><td id="1293"><a href="#1293">1293</a></td></tr
><tr id="gr_svn1303_1294"

><td id="1294"><a href="#1294">1294</a></td></tr
><tr id="gr_svn1303_1295"

><td id="1295"><a href="#1295">1295</a></td></tr
><tr id="gr_svn1303_1296"

><td id="1296"><a href="#1296">1296</a></td></tr
><tr id="gr_svn1303_1297"

><td id="1297"><a href="#1297">1297</a></td></tr
><tr id="gr_svn1303_1298"

><td id="1298"><a href="#1298">1298</a></td></tr
><tr id="gr_svn1303_1299"

><td id="1299"><a href="#1299">1299</a></td></tr
><tr id="gr_svn1303_1300"

><td id="1300"><a href="#1300">1300</a></td></tr
><tr id="gr_svn1303_1301"

><td id="1301"><a href="#1301">1301</a></td></tr
><tr id="gr_svn1303_1302"

><td id="1302"><a href="#1302">1302</a></td></tr
><tr id="gr_svn1303_1303"

><td id="1303"><a href="#1303">1303</a></td></tr
><tr id="gr_svn1303_1304"

><td id="1304"><a href="#1304">1304</a></td></tr
><tr id="gr_svn1303_1305"

><td id="1305"><a href="#1305">1305</a></td></tr
><tr id="gr_svn1303_1306"

><td id="1306"><a href="#1306">1306</a></td></tr
><tr id="gr_svn1303_1307"

><td id="1307"><a href="#1307">1307</a></td></tr
><tr id="gr_svn1303_1308"

><td id="1308"><a href="#1308">1308</a></td></tr
><tr id="gr_svn1303_1309"

><td id="1309"><a href="#1309">1309</a></td></tr
><tr id="gr_svn1303_1310"

><td id="1310"><a href="#1310">1310</a></td></tr
><tr id="gr_svn1303_1311"

><td id="1311"><a href="#1311">1311</a></td></tr
><tr id="gr_svn1303_1312"

><td id="1312"><a href="#1312">1312</a></td></tr
><tr id="gr_svn1303_1313"

><td id="1313"><a href="#1313">1313</a></td></tr
><tr id="gr_svn1303_1314"

><td id="1314"><a href="#1314">1314</a></td></tr
><tr id="gr_svn1303_1315"

><td id="1315"><a href="#1315">1315</a></td></tr
><tr id="gr_svn1303_1316"

><td id="1316"><a href="#1316">1316</a></td></tr
><tr id="gr_svn1303_1317"

><td id="1317"><a href="#1317">1317</a></td></tr
><tr id="gr_svn1303_1318"

><td id="1318"><a href="#1318">1318</a></td></tr
><tr id="gr_svn1303_1319"

><td id="1319"><a href="#1319">1319</a></td></tr
><tr id="gr_svn1303_1320"

><td id="1320"><a href="#1320">1320</a></td></tr
><tr id="gr_svn1303_1321"

><td id="1321"><a href="#1321">1321</a></td></tr
><tr id="gr_svn1303_1322"

><td id="1322"><a href="#1322">1322</a></td></tr
><tr id="gr_svn1303_1323"

><td id="1323"><a href="#1323">1323</a></td></tr
><tr id="gr_svn1303_1324"

><td id="1324"><a href="#1324">1324</a></td></tr
><tr id="gr_svn1303_1325"

><td id="1325"><a href="#1325">1325</a></td></tr
><tr id="gr_svn1303_1326"

><td id="1326"><a href="#1326">1326</a></td></tr
><tr id="gr_svn1303_1327"

><td id="1327"><a href="#1327">1327</a></td></tr
><tr id="gr_svn1303_1328"

><td id="1328"><a href="#1328">1328</a></td></tr
><tr id="gr_svn1303_1329"

><td id="1329"><a href="#1329">1329</a></td></tr
><tr id="gr_svn1303_1330"

><td id="1330"><a href="#1330">1330</a></td></tr
><tr id="gr_svn1303_1331"

><td id="1331"><a href="#1331">1331</a></td></tr
><tr id="gr_svn1303_1332"

><td id="1332"><a href="#1332">1332</a></td></tr
><tr id="gr_svn1303_1333"

><td id="1333"><a href="#1333">1333</a></td></tr
><tr id="gr_svn1303_1334"

><td id="1334"><a href="#1334">1334</a></td></tr
><tr id="gr_svn1303_1335"

><td id="1335"><a href="#1335">1335</a></td></tr
><tr id="gr_svn1303_1336"

><td id="1336"><a href="#1336">1336</a></td></tr
><tr id="gr_svn1303_1337"

><td id="1337"><a href="#1337">1337</a></td></tr
><tr id="gr_svn1303_1338"

><td id="1338"><a href="#1338">1338</a></td></tr
><tr id="gr_svn1303_1339"

><td id="1339"><a href="#1339">1339</a></td></tr
><tr id="gr_svn1303_1340"

><td id="1340"><a href="#1340">1340</a></td></tr
><tr id="gr_svn1303_1341"

><td id="1341"><a href="#1341">1341</a></td></tr
><tr id="gr_svn1303_1342"

><td id="1342"><a href="#1342">1342</a></td></tr
><tr id="gr_svn1303_1343"

><td id="1343"><a href="#1343">1343</a></td></tr
><tr id="gr_svn1303_1344"

><td id="1344"><a href="#1344">1344</a></td></tr
><tr id="gr_svn1303_1345"

><td id="1345"><a href="#1345">1345</a></td></tr
><tr id="gr_svn1303_1346"

><td id="1346"><a href="#1346">1346</a></td></tr
><tr id="gr_svn1303_1347"

><td id="1347"><a href="#1347">1347</a></td></tr
><tr id="gr_svn1303_1348"

><td id="1348"><a href="#1348">1348</a></td></tr
><tr id="gr_svn1303_1349"

><td id="1349"><a href="#1349">1349</a></td></tr
><tr id="gr_svn1303_1350"

><td id="1350"><a href="#1350">1350</a></td></tr
><tr id="gr_svn1303_1351"

><td id="1351"><a href="#1351">1351</a></td></tr
><tr id="gr_svn1303_1352"

><td id="1352"><a href="#1352">1352</a></td></tr
><tr id="gr_svn1303_1353"

><td id="1353"><a href="#1353">1353</a></td></tr
><tr id="gr_svn1303_1354"

><td id="1354"><a href="#1354">1354</a></td></tr
><tr id="gr_svn1303_1355"

><td id="1355"><a href="#1355">1355</a></td></tr
><tr id="gr_svn1303_1356"

><td id="1356"><a href="#1356">1356</a></td></tr
><tr id="gr_svn1303_1357"

><td id="1357"><a href="#1357">1357</a></td></tr
><tr id="gr_svn1303_1358"

><td id="1358"><a href="#1358">1358</a></td></tr
><tr id="gr_svn1303_1359"

><td id="1359"><a href="#1359">1359</a></td></tr
><tr id="gr_svn1303_1360"

><td id="1360"><a href="#1360">1360</a></td></tr
><tr id="gr_svn1303_1361"

><td id="1361"><a href="#1361">1361</a></td></tr
><tr id="gr_svn1303_1362"

><td id="1362"><a href="#1362">1362</a></td></tr
><tr id="gr_svn1303_1363"

><td id="1363"><a href="#1363">1363</a></td></tr
><tr id="gr_svn1303_1364"

><td id="1364"><a href="#1364">1364</a></td></tr
><tr id="gr_svn1303_1365"

><td id="1365"><a href="#1365">1365</a></td></tr
><tr id="gr_svn1303_1366"

><td id="1366"><a href="#1366">1366</a></td></tr
><tr id="gr_svn1303_1367"

><td id="1367"><a href="#1367">1367</a></td></tr
><tr id="gr_svn1303_1368"

><td id="1368"><a href="#1368">1368</a></td></tr
><tr id="gr_svn1303_1369"

><td id="1369"><a href="#1369">1369</a></td></tr
><tr id="gr_svn1303_1370"

><td id="1370"><a href="#1370">1370</a></td></tr
><tr id="gr_svn1303_1371"

><td id="1371"><a href="#1371">1371</a></td></tr
><tr id="gr_svn1303_1372"

><td id="1372"><a href="#1372">1372</a></td></tr
><tr id="gr_svn1303_1373"

><td id="1373"><a href="#1373">1373</a></td></tr
><tr id="gr_svn1303_1374"

><td id="1374"><a href="#1374">1374</a></td></tr
><tr id="gr_svn1303_1375"

><td id="1375"><a href="#1375">1375</a></td></tr
><tr id="gr_svn1303_1376"

><td id="1376"><a href="#1376">1376</a></td></tr
><tr id="gr_svn1303_1377"

><td id="1377"><a href="#1377">1377</a></td></tr
><tr id="gr_svn1303_1378"

><td id="1378"><a href="#1378">1378</a></td></tr
><tr id="gr_svn1303_1379"

><td id="1379"><a href="#1379">1379</a></td></tr
><tr id="gr_svn1303_1380"

><td id="1380"><a href="#1380">1380</a></td></tr
><tr id="gr_svn1303_1381"

><td id="1381"><a href="#1381">1381</a></td></tr
><tr id="gr_svn1303_1382"

><td id="1382"><a href="#1382">1382</a></td></tr
><tr id="gr_svn1303_1383"

><td id="1383"><a href="#1383">1383</a></td></tr
><tr id="gr_svn1303_1384"

><td id="1384"><a href="#1384">1384</a></td></tr
><tr id="gr_svn1303_1385"

><td id="1385"><a href="#1385">1385</a></td></tr
><tr id="gr_svn1303_1386"

><td id="1386"><a href="#1386">1386</a></td></tr
><tr id="gr_svn1303_1387"

><td id="1387"><a href="#1387">1387</a></td></tr
><tr id="gr_svn1303_1388"

><td id="1388"><a href="#1388">1388</a></td></tr
><tr id="gr_svn1303_1389"

><td id="1389"><a href="#1389">1389</a></td></tr
><tr id="gr_svn1303_1390"

><td id="1390"><a href="#1390">1390</a></td></tr
><tr id="gr_svn1303_1391"

><td id="1391"><a href="#1391">1391</a></td></tr
><tr id="gr_svn1303_1392"

><td id="1392"><a href="#1392">1392</a></td></tr
><tr id="gr_svn1303_1393"

><td id="1393"><a href="#1393">1393</a></td></tr
><tr id="gr_svn1303_1394"

><td id="1394"><a href="#1394">1394</a></td></tr
><tr id="gr_svn1303_1395"

><td id="1395"><a href="#1395">1395</a></td></tr
><tr id="gr_svn1303_1396"

><td id="1396"><a href="#1396">1396</a></td></tr
><tr id="gr_svn1303_1397"

><td id="1397"><a href="#1397">1397</a></td></tr
><tr id="gr_svn1303_1398"

><td id="1398"><a href="#1398">1398</a></td></tr
><tr id="gr_svn1303_1399"

><td id="1399"><a href="#1399">1399</a></td></tr
><tr id="gr_svn1303_1400"

><td id="1400"><a href="#1400">1400</a></td></tr
><tr id="gr_svn1303_1401"

><td id="1401"><a href="#1401">1401</a></td></tr
><tr id="gr_svn1303_1402"

><td id="1402"><a href="#1402">1402</a></td></tr
><tr id="gr_svn1303_1403"

><td id="1403"><a href="#1403">1403</a></td></tr
><tr id="gr_svn1303_1404"

><td id="1404"><a href="#1404">1404</a></td></tr
><tr id="gr_svn1303_1405"

><td id="1405"><a href="#1405">1405</a></td></tr
><tr id="gr_svn1303_1406"

><td id="1406"><a href="#1406">1406</a></td></tr
><tr id="gr_svn1303_1407"

><td id="1407"><a href="#1407">1407</a></td></tr
><tr id="gr_svn1303_1408"

><td id="1408"><a href="#1408">1408</a></td></tr
><tr id="gr_svn1303_1409"

><td id="1409"><a href="#1409">1409</a></td></tr
><tr id="gr_svn1303_1410"

><td id="1410"><a href="#1410">1410</a></td></tr
><tr id="gr_svn1303_1411"

><td id="1411"><a href="#1411">1411</a></td></tr
><tr id="gr_svn1303_1412"

><td id="1412"><a href="#1412">1412</a></td></tr
><tr id="gr_svn1303_1413"

><td id="1413"><a href="#1413">1413</a></td></tr
><tr id="gr_svn1303_1414"

><td id="1414"><a href="#1414">1414</a></td></tr
><tr id="gr_svn1303_1415"

><td id="1415"><a href="#1415">1415</a></td></tr
><tr id="gr_svn1303_1416"

><td id="1416"><a href="#1416">1416</a></td></tr
><tr id="gr_svn1303_1417"

><td id="1417"><a href="#1417">1417</a></td></tr
><tr id="gr_svn1303_1418"

><td id="1418"><a href="#1418">1418</a></td></tr
><tr id="gr_svn1303_1419"

><td id="1419"><a href="#1419">1419</a></td></tr
><tr id="gr_svn1303_1420"

><td id="1420"><a href="#1420">1420</a></td></tr
><tr id="gr_svn1303_1421"

><td id="1421"><a href="#1421">1421</a></td></tr
><tr id="gr_svn1303_1422"

><td id="1422"><a href="#1422">1422</a></td></tr
><tr id="gr_svn1303_1423"

><td id="1423"><a href="#1423">1423</a></td></tr
><tr id="gr_svn1303_1424"

><td id="1424"><a href="#1424">1424</a></td></tr
><tr id="gr_svn1303_1425"

><td id="1425"><a href="#1425">1425</a></td></tr
><tr id="gr_svn1303_1426"

><td id="1426"><a href="#1426">1426</a></td></tr
><tr id="gr_svn1303_1427"

><td id="1427"><a href="#1427">1427</a></td></tr
><tr id="gr_svn1303_1428"

><td id="1428"><a href="#1428">1428</a></td></tr
><tr id="gr_svn1303_1429"

><td id="1429"><a href="#1429">1429</a></td></tr
><tr id="gr_svn1303_1430"

><td id="1430"><a href="#1430">1430</a></td></tr
><tr id="gr_svn1303_1431"

><td id="1431"><a href="#1431">1431</a></td></tr
><tr id="gr_svn1303_1432"

><td id="1432"><a href="#1432">1432</a></td></tr
><tr id="gr_svn1303_1433"

><td id="1433"><a href="#1433">1433</a></td></tr
><tr id="gr_svn1303_1434"

><td id="1434"><a href="#1434">1434</a></td></tr
><tr id="gr_svn1303_1435"

><td id="1435"><a href="#1435">1435</a></td></tr
><tr id="gr_svn1303_1436"

><td id="1436"><a href="#1436">1436</a></td></tr
><tr id="gr_svn1303_1437"

><td id="1437"><a href="#1437">1437</a></td></tr
><tr id="gr_svn1303_1438"

><td id="1438"><a href="#1438">1438</a></td></tr
><tr id="gr_svn1303_1439"

><td id="1439"><a href="#1439">1439</a></td></tr
><tr id="gr_svn1303_1440"

><td id="1440"><a href="#1440">1440</a></td></tr
><tr id="gr_svn1303_1441"

><td id="1441"><a href="#1441">1441</a></td></tr
><tr id="gr_svn1303_1442"

><td id="1442"><a href="#1442">1442</a></td></tr
><tr id="gr_svn1303_1443"

><td id="1443"><a href="#1443">1443</a></td></tr
><tr id="gr_svn1303_1444"

><td id="1444"><a href="#1444">1444</a></td></tr
><tr id="gr_svn1303_1445"

><td id="1445"><a href="#1445">1445</a></td></tr
><tr id="gr_svn1303_1446"

><td id="1446"><a href="#1446">1446</a></td></tr
><tr id="gr_svn1303_1447"

><td id="1447"><a href="#1447">1447</a></td></tr
><tr id="gr_svn1303_1448"

><td id="1448"><a href="#1448">1448</a></td></tr
><tr id="gr_svn1303_1449"

><td id="1449"><a href="#1449">1449</a></td></tr
><tr id="gr_svn1303_1450"

><td id="1450"><a href="#1450">1450</a></td></tr
><tr id="gr_svn1303_1451"

><td id="1451"><a href="#1451">1451</a></td></tr
><tr id="gr_svn1303_1452"

><td id="1452"><a href="#1452">1452</a></td></tr
><tr id="gr_svn1303_1453"

><td id="1453"><a href="#1453">1453</a></td></tr
><tr id="gr_svn1303_1454"

><td id="1454"><a href="#1454">1454</a></td></tr
><tr id="gr_svn1303_1455"

><td id="1455"><a href="#1455">1455</a></td></tr
><tr id="gr_svn1303_1456"

><td id="1456"><a href="#1456">1456</a></td></tr
><tr id="gr_svn1303_1457"

><td id="1457"><a href="#1457">1457</a></td></tr
><tr id="gr_svn1303_1458"

><td id="1458"><a href="#1458">1458</a></td></tr
><tr id="gr_svn1303_1459"

><td id="1459"><a href="#1459">1459</a></td></tr
><tr id="gr_svn1303_1460"

><td id="1460"><a href="#1460">1460</a></td></tr
><tr id="gr_svn1303_1461"

><td id="1461"><a href="#1461">1461</a></td></tr
><tr id="gr_svn1303_1462"

><td id="1462"><a href="#1462">1462</a></td></tr
><tr id="gr_svn1303_1463"

><td id="1463"><a href="#1463">1463</a></td></tr
><tr id="gr_svn1303_1464"

><td id="1464"><a href="#1464">1464</a></td></tr
><tr id="gr_svn1303_1465"

><td id="1465"><a href="#1465">1465</a></td></tr
><tr id="gr_svn1303_1466"

><td id="1466"><a href="#1466">1466</a></td></tr
><tr id="gr_svn1303_1467"

><td id="1467"><a href="#1467">1467</a></td></tr
><tr id="gr_svn1303_1468"

><td id="1468"><a href="#1468">1468</a></td></tr
><tr id="gr_svn1303_1469"

><td id="1469"><a href="#1469">1469</a></td></tr
><tr id="gr_svn1303_1470"

><td id="1470"><a href="#1470">1470</a></td></tr
><tr id="gr_svn1303_1471"

><td id="1471"><a href="#1471">1471</a></td></tr
><tr id="gr_svn1303_1472"

><td id="1472"><a href="#1472">1472</a></td></tr
><tr id="gr_svn1303_1473"

><td id="1473"><a href="#1473">1473</a></td></tr
><tr id="gr_svn1303_1474"

><td id="1474"><a href="#1474">1474</a></td></tr
><tr id="gr_svn1303_1475"

><td id="1475"><a href="#1475">1475</a></td></tr
><tr id="gr_svn1303_1476"

><td id="1476"><a href="#1476">1476</a></td></tr
><tr id="gr_svn1303_1477"

><td id="1477"><a href="#1477">1477</a></td></tr
><tr id="gr_svn1303_1478"

><td id="1478"><a href="#1478">1478</a></td></tr
><tr id="gr_svn1303_1479"

><td id="1479"><a href="#1479">1479</a></td></tr
><tr id="gr_svn1303_1480"

><td id="1480"><a href="#1480">1480</a></td></tr
><tr id="gr_svn1303_1481"

><td id="1481"><a href="#1481">1481</a></td></tr
><tr id="gr_svn1303_1482"

><td id="1482"><a href="#1482">1482</a></td></tr
><tr id="gr_svn1303_1483"

><td id="1483"><a href="#1483">1483</a></td></tr
><tr id="gr_svn1303_1484"

><td id="1484"><a href="#1484">1484</a></td></tr
><tr id="gr_svn1303_1485"

><td id="1485"><a href="#1485">1485</a></td></tr
><tr id="gr_svn1303_1486"

><td id="1486"><a href="#1486">1486</a></td></tr
><tr id="gr_svn1303_1487"

><td id="1487"><a href="#1487">1487</a></td></tr
><tr id="gr_svn1303_1488"

><td id="1488"><a href="#1488">1488</a></td></tr
><tr id="gr_svn1303_1489"

><td id="1489"><a href="#1489">1489</a></td></tr
><tr id="gr_svn1303_1490"

><td id="1490"><a href="#1490">1490</a></td></tr
><tr id="gr_svn1303_1491"

><td id="1491"><a href="#1491">1491</a></td></tr
><tr id="gr_svn1303_1492"

><td id="1492"><a href="#1492">1492</a></td></tr
><tr id="gr_svn1303_1493"

><td id="1493"><a href="#1493">1493</a></td></tr
><tr id="gr_svn1303_1494"

><td id="1494"><a href="#1494">1494</a></td></tr
><tr id="gr_svn1303_1495"

><td id="1495"><a href="#1495">1495</a></td></tr
><tr id="gr_svn1303_1496"

><td id="1496"><a href="#1496">1496</a></td></tr
><tr id="gr_svn1303_1497"

><td id="1497"><a href="#1497">1497</a></td></tr
><tr id="gr_svn1303_1498"

><td id="1498"><a href="#1498">1498</a></td></tr
><tr id="gr_svn1303_1499"

><td id="1499"><a href="#1499">1499</a></td></tr
><tr id="gr_svn1303_1500"

><td id="1500"><a href="#1500">1500</a></td></tr
><tr id="gr_svn1303_1501"

><td id="1501"><a href="#1501">1501</a></td></tr
><tr id="gr_svn1303_1502"

><td id="1502"><a href="#1502">1502</a></td></tr
><tr id="gr_svn1303_1503"

><td id="1503"><a href="#1503">1503</a></td></tr
><tr id="gr_svn1303_1504"

><td id="1504"><a href="#1504">1504</a></td></tr
><tr id="gr_svn1303_1505"

><td id="1505"><a href="#1505">1505</a></td></tr
><tr id="gr_svn1303_1506"

><td id="1506"><a href="#1506">1506</a></td></tr
><tr id="gr_svn1303_1507"

><td id="1507"><a href="#1507">1507</a></td></tr
><tr id="gr_svn1303_1508"

><td id="1508"><a href="#1508">1508</a></td></tr
><tr id="gr_svn1303_1509"

><td id="1509"><a href="#1509">1509</a></td></tr
><tr id="gr_svn1303_1510"

><td id="1510"><a href="#1510">1510</a></td></tr
><tr id="gr_svn1303_1511"

><td id="1511"><a href="#1511">1511</a></td></tr
><tr id="gr_svn1303_1512"

><td id="1512"><a href="#1512">1512</a></td></tr
><tr id="gr_svn1303_1513"

><td id="1513"><a href="#1513">1513</a></td></tr
><tr id="gr_svn1303_1514"

><td id="1514"><a href="#1514">1514</a></td></tr
><tr id="gr_svn1303_1515"

><td id="1515"><a href="#1515">1515</a></td></tr
><tr id="gr_svn1303_1516"

><td id="1516"><a href="#1516">1516</a></td></tr
><tr id="gr_svn1303_1517"

><td id="1517"><a href="#1517">1517</a></td></tr
><tr id="gr_svn1303_1518"

><td id="1518"><a href="#1518">1518</a></td></tr
><tr id="gr_svn1303_1519"

><td id="1519"><a href="#1519">1519</a></td></tr
><tr id="gr_svn1303_1520"

><td id="1520"><a href="#1520">1520</a></td></tr
><tr id="gr_svn1303_1521"

><td id="1521"><a href="#1521">1521</a></td></tr
><tr id="gr_svn1303_1522"

><td id="1522"><a href="#1522">1522</a></td></tr
><tr id="gr_svn1303_1523"

><td id="1523"><a href="#1523">1523</a></td></tr
><tr id="gr_svn1303_1524"

><td id="1524"><a href="#1524">1524</a></td></tr
><tr id="gr_svn1303_1525"

><td id="1525"><a href="#1525">1525</a></td></tr
><tr id="gr_svn1303_1526"

><td id="1526"><a href="#1526">1526</a></td></tr
><tr id="gr_svn1303_1527"

><td id="1527"><a href="#1527">1527</a></td></tr
><tr id="gr_svn1303_1528"

><td id="1528"><a href="#1528">1528</a></td></tr
><tr id="gr_svn1303_1529"

><td id="1529"><a href="#1529">1529</a></td></tr
><tr id="gr_svn1303_1530"

><td id="1530"><a href="#1530">1530</a></td></tr
><tr id="gr_svn1303_1531"

><td id="1531"><a href="#1531">1531</a></td></tr
><tr id="gr_svn1303_1532"

><td id="1532"><a href="#1532">1532</a></td></tr
><tr id="gr_svn1303_1533"

><td id="1533"><a href="#1533">1533</a></td></tr
><tr id="gr_svn1303_1534"

><td id="1534"><a href="#1534">1534</a></td></tr
><tr id="gr_svn1303_1535"

><td id="1535"><a href="#1535">1535</a></td></tr
><tr id="gr_svn1303_1536"

><td id="1536"><a href="#1536">1536</a></td></tr
><tr id="gr_svn1303_1537"

><td id="1537"><a href="#1537">1537</a></td></tr
><tr id="gr_svn1303_1538"

><td id="1538"><a href="#1538">1538</a></td></tr
><tr id="gr_svn1303_1539"

><td id="1539"><a href="#1539">1539</a></td></tr
><tr id="gr_svn1303_1540"

><td id="1540"><a href="#1540">1540</a></td></tr
><tr id="gr_svn1303_1541"

><td id="1541"><a href="#1541">1541</a></td></tr
><tr id="gr_svn1303_1542"

><td id="1542"><a href="#1542">1542</a></td></tr
><tr id="gr_svn1303_1543"

><td id="1543"><a href="#1543">1543</a></td></tr
><tr id="gr_svn1303_1544"

><td id="1544"><a href="#1544">1544</a></td></tr
><tr id="gr_svn1303_1545"

><td id="1545"><a href="#1545">1545</a></td></tr
><tr id="gr_svn1303_1546"

><td id="1546"><a href="#1546">1546</a></td></tr
><tr id="gr_svn1303_1547"

><td id="1547"><a href="#1547">1547</a></td></tr
><tr id="gr_svn1303_1548"

><td id="1548"><a href="#1548">1548</a></td></tr
><tr id="gr_svn1303_1549"

><td id="1549"><a href="#1549">1549</a></td></tr
><tr id="gr_svn1303_1550"

><td id="1550"><a href="#1550">1550</a></td></tr
><tr id="gr_svn1303_1551"

><td id="1551"><a href="#1551">1551</a></td></tr
><tr id="gr_svn1303_1552"

><td id="1552"><a href="#1552">1552</a></td></tr
><tr id="gr_svn1303_1553"

><td id="1553"><a href="#1553">1553</a></td></tr
><tr id="gr_svn1303_1554"

><td id="1554"><a href="#1554">1554</a></td></tr
><tr id="gr_svn1303_1555"

><td id="1555"><a href="#1555">1555</a></td></tr
><tr id="gr_svn1303_1556"

><td id="1556"><a href="#1556">1556</a></td></tr
><tr id="gr_svn1303_1557"

><td id="1557"><a href="#1557">1557</a></td></tr
><tr id="gr_svn1303_1558"

><td id="1558"><a href="#1558">1558</a></td></tr
><tr id="gr_svn1303_1559"

><td id="1559"><a href="#1559">1559</a></td></tr
><tr id="gr_svn1303_1560"

><td id="1560"><a href="#1560">1560</a></td></tr
><tr id="gr_svn1303_1561"

><td id="1561"><a href="#1561">1561</a></td></tr
><tr id="gr_svn1303_1562"

><td id="1562"><a href="#1562">1562</a></td></tr
><tr id="gr_svn1303_1563"

><td id="1563"><a href="#1563">1563</a></td></tr
><tr id="gr_svn1303_1564"

><td id="1564"><a href="#1564">1564</a></td></tr
><tr id="gr_svn1303_1565"

><td id="1565"><a href="#1565">1565</a></td></tr
><tr id="gr_svn1303_1566"

><td id="1566"><a href="#1566">1566</a></td></tr
><tr id="gr_svn1303_1567"

><td id="1567"><a href="#1567">1567</a></td></tr
><tr id="gr_svn1303_1568"

><td id="1568"><a href="#1568">1568</a></td></tr
><tr id="gr_svn1303_1569"

><td id="1569"><a href="#1569">1569</a></td></tr
><tr id="gr_svn1303_1570"

><td id="1570"><a href="#1570">1570</a></td></tr
><tr id="gr_svn1303_1571"

><td id="1571"><a href="#1571">1571</a></td></tr
><tr id="gr_svn1303_1572"

><td id="1572"><a href="#1572">1572</a></td></tr
><tr id="gr_svn1303_1573"

><td id="1573"><a href="#1573">1573</a></td></tr
><tr id="gr_svn1303_1574"

><td id="1574"><a href="#1574">1574</a></td></tr
><tr id="gr_svn1303_1575"

><td id="1575"><a href="#1575">1575</a></td></tr
><tr id="gr_svn1303_1576"

><td id="1576"><a href="#1576">1576</a></td></tr
><tr id="gr_svn1303_1577"

><td id="1577"><a href="#1577">1577</a></td></tr
><tr id="gr_svn1303_1578"

><td id="1578"><a href="#1578">1578</a></td></tr
><tr id="gr_svn1303_1579"

><td id="1579"><a href="#1579">1579</a></td></tr
><tr id="gr_svn1303_1580"

><td id="1580"><a href="#1580">1580</a></td></tr
><tr id="gr_svn1303_1581"

><td id="1581"><a href="#1581">1581</a></td></tr
><tr id="gr_svn1303_1582"

><td id="1582"><a href="#1582">1582</a></td></tr
><tr id="gr_svn1303_1583"

><td id="1583"><a href="#1583">1583</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre ><table id="src_table_0"><tr
id=sl_svn1303_1

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_2

><td class="source">// board orientation and setup<br></td></tr
><tr
id=sl_svn1303_3

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_4

><td class="source">//default board orientation<br></td></tr
><tr
id=sl_svn1303_5

><td class="source">#if !defined(ACC_ORIENTATION) <br></td></tr
><tr
id=sl_svn1303_6

><td class="source">  #define ACC_ORIENTATION(X, Y, Z)  {accADC[ROLL]  = X; accADC[PITCH]  = Y; accADC[YAW]  = Z;}<br></td></tr
><tr
id=sl_svn1303_7

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_8

><td class="source">#if !defined(GYRO_ORIENTATION) <br></td></tr
><tr
id=sl_svn1303_9

><td class="source">  #define GYRO_ORIENTATION(X, Y, Z) {gyroADC[ROLL] = X; gyroADC[PITCH] = Y; gyroADC[YAW] = Z;}<br></td></tr
><tr
id=sl_svn1303_10

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_11

><td class="source">#if !defined(MAG_ORIENTATION) <br></td></tr
><tr
id=sl_svn1303_12

><td class="source">  #define MAG_ORIENTATION(X, Y, Z)  {magADC[ROLL]  = X; magADC[PITCH]  = Y; magADC[YAW]  = Z;}<br></td></tr
><tr
id=sl_svn1303_13

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_14

><td class="source"><br></td></tr
><tr
id=sl_svn1303_15

><td class="source">/*** I2C address ***/<br></td></tr
><tr
id=sl_svn1303_16

><td class="source">#if !defined(MMA7455_ADDRESS)<br></td></tr
><tr
id=sl_svn1303_17

><td class="source">  #define MMA7455_ADDRESS 0x1D<br></td></tr
><tr
id=sl_svn1303_18

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_19

><td class="source"><br></td></tr
><tr
id=sl_svn1303_20

><td class="source">#if !defined(ADXL345_ADDRESS) <br></td></tr
><tr
id=sl_svn1303_21

><td class="source">  #define ADXL345_ADDRESS 0x1D<br></td></tr
><tr
id=sl_svn1303_22

><td class="source">  //#define ADXL345_ADDRESS 0x53   //WARNING: Conflicts with a Wii Motion plus!<br></td></tr
><tr
id=sl_svn1303_23

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_24

><td class="source"><br></td></tr
><tr
id=sl_svn1303_25

><td class="source">#if !defined(BMA180_ADDRESS) <br></td></tr
><tr
id=sl_svn1303_26

><td class="source">  #define BMA180_ADDRESS 0x40<br></td></tr
><tr
id=sl_svn1303_27

><td class="source">  //#define BMA180_ADDRESS 0x41<br></td></tr
><tr
id=sl_svn1303_28

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_29

><td class="source"><br></td></tr
><tr
id=sl_svn1303_30

><td class="source">#if !defined(ITG3200_ADDRESS) <br></td></tr
><tr
id=sl_svn1303_31

><td class="source">  #define ITG3200_ADDRESS 0X68<br></td></tr
><tr
id=sl_svn1303_32

><td class="source">  //#define ITG3200_ADDRESS 0X69<br></td></tr
><tr
id=sl_svn1303_33

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_34

><td class="source"><br></td></tr
><tr
id=sl_svn1303_35

><td class="source">#if !defined(MPU6050_ADDRESS)<br></td></tr
><tr
id=sl_svn1303_36

><td class="source">  #define MPU6050_ADDRESS     0x68 // address pin AD0 low (GND), default for FreeIMU v0.4 and InvenSense evaluation board<br></td></tr
><tr
id=sl_svn1303_37

><td class="source">  //#define MPU6050_ADDRESS     0x69 // address pin AD0 high (VCC)<br></td></tr
><tr
id=sl_svn1303_38

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_39

><td class="source"><br></td></tr
><tr
id=sl_svn1303_40

><td class="source">#if !defined(MPU3050_ADDRESS)<br></td></tr
><tr
id=sl_svn1303_41

><td class="source">  #define MPU3050_ADDRESS     0x68 // Switch in &quot;ON&quot; position<br></td></tr
><tr
id=sl_svn1303_42

><td class="source">  //#define MPU3050_ADDRESS     0x69 // Switch in &quot;1&quot; position<br></td></tr
><tr
id=sl_svn1303_43

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_44

><td class="source"><br></td></tr
><tr
id=sl_svn1303_45

><td class="source">#if !defined(MS561101BA_ADDRESS) <br></td></tr
><tr
id=sl_svn1303_46

><td class="source">  #define MS561101BA_ADDRESS 0x77 //CBR=0 0xEE I2C address when pin CSB is connected to LOW (GND)<br></td></tr
><tr
id=sl_svn1303_47

><td class="source">  //#define MS561101BA_ADDRESS 0x76 //CBR=1 0xEC I2C address when pin CSB is connected to HIGH (VCC)<br></td></tr
><tr
id=sl_svn1303_48

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_49

><td class="source"><br></td></tr
><tr
id=sl_svn1303_50

><td class="source">//ITG3200 and ITG3205 Gyro LPF setting<br></td></tr
><tr
id=sl_svn1303_51

><td class="source">#if defined(ITG3200_LPF_256HZ) || defined(ITG3200_LPF_188HZ) || defined(ITG3200_LPF_98HZ) || defined(ITG3200_LPF_42HZ) || defined(ITG3200_LPF_20HZ) || defined(ITG3200_LPF_10HZ)<br></td></tr
><tr
id=sl_svn1303_52

><td class="source">  #if defined(ITG3200_LPF_256HZ)<br></td></tr
><tr
id=sl_svn1303_53

><td class="source">    #define ITG3200_SMPLRT_DIV 0  //8000Hz<br></td></tr
><tr
id=sl_svn1303_54

><td class="source">    #define ITG3200_DLPF_CFG   0<br></td></tr
><tr
id=sl_svn1303_55

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_56

><td class="source">  #if defined(ITG3200_LPF_188HZ)<br></td></tr
><tr
id=sl_svn1303_57

><td class="source">    #define ITG3200_SMPLRT_DIV 0  //1000Hz<br></td></tr
><tr
id=sl_svn1303_58

><td class="source">    #define ITG3200_DLPF_CFG   1<br></td></tr
><tr
id=sl_svn1303_59

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_60

><td class="source">  #if defined(ITG3200_LPF_98HZ)<br></td></tr
><tr
id=sl_svn1303_61

><td class="source">    #define ITG3200_SMPLRT_DIV 0<br></td></tr
><tr
id=sl_svn1303_62

><td class="source">    #define ITG3200_DLPF_CFG   2<br></td></tr
><tr
id=sl_svn1303_63

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_64

><td class="source">  #if defined(ITG3200_LPF_42HZ)<br></td></tr
><tr
id=sl_svn1303_65

><td class="source">    #define ITG3200_SMPLRT_DIV 0<br></td></tr
><tr
id=sl_svn1303_66

><td class="source">    #define ITG3200_DLPF_CFG   3<br></td></tr
><tr
id=sl_svn1303_67

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_68

><td class="source">  #if defined(ITG3200_LPF_20HZ)<br></td></tr
><tr
id=sl_svn1303_69

><td class="source">    #define ITG3200_SMPLRT_DIV 0<br></td></tr
><tr
id=sl_svn1303_70

><td class="source">    #define ITG3200_DLPF_CFG   4<br></td></tr
><tr
id=sl_svn1303_71

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_72

><td class="source">  #if defined(ITG3200_LPF_10HZ)<br></td></tr
><tr
id=sl_svn1303_73

><td class="source">    #define ITG3200_SMPLRT_DIV 0<br></td></tr
><tr
id=sl_svn1303_74

><td class="source">    #define ITG3200_DLPF_CFG   5<br></td></tr
><tr
id=sl_svn1303_75

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_76

><td class="source">#else<br></td></tr
><tr
id=sl_svn1303_77

><td class="source">    //Default settings LPF 256Hz/8000Hz sample<br></td></tr
><tr
id=sl_svn1303_78

><td class="source">    #define ITG3200_SMPLRT_DIV 0  //8000Hz<br></td></tr
><tr
id=sl_svn1303_79

><td class="source">    #define ITG3200_DLPF_CFG   0<br></td></tr
><tr
id=sl_svn1303_80

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_81

><td class="source"><br></td></tr
><tr
id=sl_svn1303_82

><td class="source">//MPU6050 Gyro LPF setting<br></td></tr
><tr
id=sl_svn1303_83

><td class="source">#if defined(MPU6050_LPF_256HZ) || defined(MPU6050_LPF_188HZ) || defined(MPU6050_LPF_98HZ) || defined(MPU6050_LPF_42HZ) || defined(MPU6050_LPF_20HZ) || defined(MPU6050_LPF_10HZ) || defined(MPU6050_LPF_5HZ)<br></td></tr
><tr
id=sl_svn1303_84

><td class="source">  #if defined(MPU6050_LPF_256HZ)<br></td></tr
><tr
id=sl_svn1303_85

><td class="source">    #define MPU6050_DLPF_CFG   0<br></td></tr
><tr
id=sl_svn1303_86

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_87

><td class="source">  #if defined(MPU6050_LPF_188HZ)<br></td></tr
><tr
id=sl_svn1303_88

><td class="source">    #define MPU6050_DLPF_CFG   1<br></td></tr
><tr
id=sl_svn1303_89

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_90

><td class="source">  #if defined(MPU6050_LPF_98HZ)<br></td></tr
><tr
id=sl_svn1303_91

><td class="source">    #define MPU6050_DLPF_CFG   2<br></td></tr
><tr
id=sl_svn1303_92

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_93

><td class="source">  #if defined(MPU6050_LPF_42HZ)<br></td></tr
><tr
id=sl_svn1303_94

><td class="source">    #define MPU6050_DLPF_CFG   3<br></td></tr
><tr
id=sl_svn1303_95

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_96

><td class="source">  #if defined(MPU6050_LPF_20HZ)<br></td></tr
><tr
id=sl_svn1303_97

><td class="source">    #define MPU6050_DLPF_CFG   4<br></td></tr
><tr
id=sl_svn1303_98

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_99

><td class="source">  #if defined(MPU6050_LPF_10HZ)<br></td></tr
><tr
id=sl_svn1303_100

><td class="source">    #define MPU6050_DLPF_CFG   5<br></td></tr
><tr
id=sl_svn1303_101

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_102

><td class="source">  #if defined(MPU6050_LPF_5HZ)<br></td></tr
><tr
id=sl_svn1303_103

><td class="source">    #define MPU6050_DLPF_CFG   6<br></td></tr
><tr
id=sl_svn1303_104

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_105

><td class="source">#else<br></td></tr
><tr
id=sl_svn1303_106

><td class="source">    //Default settings LPF 256Hz/8000Hz sample<br></td></tr
><tr
id=sl_svn1303_107

><td class="source">    #define MPU6050_DLPF_CFG   0<br></td></tr
><tr
id=sl_svn1303_108

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_109

><td class="source"><br></td></tr
><tr
id=sl_svn1303_110

><td class="source">//MPU3050 Gyro LPF setting<br></td></tr
><tr
id=sl_svn1303_111

><td class="source">#if defined(MPU3050_LPF_256HZ) || defined(MPU3050_LPF_188HZ) || defined(MPU3050_LPF_98HZ) || defined(MPU3050_LPF_42HZ) || defined(MPU3050_LPF_20HZ) || defined(MPU3050_LPF_10HZ) || defined(MPU3050_LPF_5HZ)<br></td></tr
><tr
id=sl_svn1303_112

><td class="source">  #if defined(MPU3050_LPF_256HZ)<br></td></tr
><tr
id=sl_svn1303_113

><td class="source">    #define MPU3050_DLPF_CFG   0<br></td></tr
><tr
id=sl_svn1303_114

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_115

><td class="source">  #if defined(MPU3050_LPF_188HZ)<br></td></tr
><tr
id=sl_svn1303_116

><td class="source">    #define MPU3050_DLPF_CFG   1<br></td></tr
><tr
id=sl_svn1303_117

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_118

><td class="source">  #if defined(MPU3050_LPF_98HZ)<br></td></tr
><tr
id=sl_svn1303_119

><td class="source">    #define MPU3050_DLPF_CFG   2<br></td></tr
><tr
id=sl_svn1303_120

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_121

><td class="source">  #if defined(MPU3050_LPF_42HZ)<br></td></tr
><tr
id=sl_svn1303_122

><td class="source">    #define MPU3050_DLPF_CFG   3<br></td></tr
><tr
id=sl_svn1303_123

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_124

><td class="source">  #if defined(MPU3050_LPF_20HZ)<br></td></tr
><tr
id=sl_svn1303_125

><td class="source">    #define MPU3050_DLPF_CFG   4<br></td></tr
><tr
id=sl_svn1303_126

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_127

><td class="source">  #if defined(MPU3050_LPF_10HZ)<br></td></tr
><tr
id=sl_svn1303_128

><td class="source">    #define MPU3050_DLPF_CFG   5<br></td></tr
><tr
id=sl_svn1303_129

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_130

><td class="source">  #if defined(MPU3050_LPF_5HZ)<br></td></tr
><tr
id=sl_svn1303_131

><td class="source">    #define MPU3050_DLPF_CFG   6<br></td></tr
><tr
id=sl_svn1303_132

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_133

><td class="source">#else<br></td></tr
><tr
id=sl_svn1303_134

><td class="source">    //Default settings LPF 256Hz/8000Hz sample<br></td></tr
><tr
id=sl_svn1303_135

><td class="source">    #define MPU3050_DLPF_CFG   0<br></td></tr
><tr
id=sl_svn1303_136

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_137

><td class="source"><br></td></tr
><tr
id=sl_svn1303_138

><td class="source">#if defined(TINY_GPS) | defined(TINY_GPS_SONAR)<br></td></tr
><tr
id=sl_svn1303_139

><td class="source">#define TINY_GPS_TWI_ADD 0x11<br></td></tr
><tr
id=sl_svn1303_140

><td class="source">#include &quot;tinygps.h&quot;<br></td></tr
><tr
id=sl_svn1303_141

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_142

><td class="source"><br></td></tr
><tr
id=sl_svn1303_143

><td class="source">uint8_t rawADC[6];<br></td></tr
><tr
id=sl_svn1303_144

><td class="source">static uint32_t neutralizeTime = 0;<br></td></tr
><tr
id=sl_svn1303_145

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_146

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_147

><td class="source">// I2C general functions<br></td></tr
><tr
id=sl_svn1303_148

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_149

><td class="source"><br></td></tr
><tr
id=sl_svn1303_150

><td class="source">void i2c_init(void) {<br></td></tr
><tr
id=sl_svn1303_151

><td class="source">  #if defined(INTERNAL_I2C_PULLUPS)<br></td></tr
><tr
id=sl_svn1303_152

><td class="source">    I2C_PULLUPS_ENABLE<br></td></tr
><tr
id=sl_svn1303_153

><td class="source">  #else<br></td></tr
><tr
id=sl_svn1303_154

><td class="source">    I2C_PULLUPS_DISABLE<br></td></tr
><tr
id=sl_svn1303_155

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_156

><td class="source">  TWSR = 0;                                    // no prescaler =&gt; prescaler = 1<br></td></tr
><tr
id=sl_svn1303_157

><td class="source">  TWBR = ((F_CPU / I2C_SPEED) - 16) / 2;   // change the I2C clock rate<br></td></tr
><tr
id=sl_svn1303_158

><td class="source">  TWCR = 1&lt;&lt;TWEN;                              // enable twi module, no interrupt<br></td></tr
><tr
id=sl_svn1303_159

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_160

><td class="source"><br></td></tr
><tr
id=sl_svn1303_161

><td class="source">void i2c_rep_start(uint8_t address) {<br></td></tr
><tr
id=sl_svn1303_162

><td class="source">  TWCR = (1&lt;&lt;TWINT) | (1&lt;&lt;TWSTA) | (1&lt;&lt;TWEN) ; // send REPEAT START condition<br></td></tr
><tr
id=sl_svn1303_163

><td class="source">  waitTransmissionI2C();                       // wait until transmission completed<br></td></tr
><tr
id=sl_svn1303_164

><td class="source">  TWDR = address;                              // send device address<br></td></tr
><tr
id=sl_svn1303_165

><td class="source">  TWCR = (1&lt;&lt;TWINT) | (1&lt;&lt;TWEN);<br></td></tr
><tr
id=sl_svn1303_166

><td class="source">  waitTransmissionI2C();                       // wail until transmission completed<br></td></tr
><tr
id=sl_svn1303_167

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_168

><td class="source"><br></td></tr
><tr
id=sl_svn1303_169

><td class="source">void i2c_stop(void) {<br></td></tr
><tr
id=sl_svn1303_170

><td class="source">  TWCR = (1 &lt;&lt; TWINT) | (1 &lt;&lt; TWEN) | (1 &lt;&lt; TWSTO);<br></td></tr
><tr
id=sl_svn1303_171

><td class="source">  //  while(TWCR &amp; (1&lt;&lt;TWSTO));                // &lt;- can produce a blocking state with some WMP clones<br></td></tr
><tr
id=sl_svn1303_172

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_173

><td class="source"><br></td></tr
><tr
id=sl_svn1303_174

><td class="source">void i2c_write(uint8_t data ) {<br></td></tr
><tr
id=sl_svn1303_175

><td class="source">  TWDR = data;                                 // send data to the previously addressed device<br></td></tr
><tr
id=sl_svn1303_176

><td class="source">  TWCR = (1&lt;&lt;TWINT) | (1&lt;&lt;TWEN);<br></td></tr
><tr
id=sl_svn1303_177

><td class="source">  waitTransmissionI2C();<br></td></tr
><tr
id=sl_svn1303_178

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_179

><td class="source"><br></td></tr
><tr
id=sl_svn1303_180

><td class="source">uint8_t i2c_read(uint8_t ack) {<br></td></tr
><tr
id=sl_svn1303_181

><td class="source">  TWCR = (1&lt;&lt;TWINT) | (1&lt;&lt;TWEN) | (ack? (1&lt;&lt;TWEA) : 0);<br></td></tr
><tr
id=sl_svn1303_182

><td class="source">  waitTransmissionI2C();<br></td></tr
><tr
id=sl_svn1303_183

><td class="source">  uint8_t r = TWDR;<br></td></tr
><tr
id=sl_svn1303_184

><td class="source">  if (!ack) i2c_stop();<br></td></tr
><tr
id=sl_svn1303_185

><td class="source">  return r;<br></td></tr
><tr
id=sl_svn1303_186

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_187

><td class="source"><br></td></tr
><tr
id=sl_svn1303_188

><td class="source">uint8_t i2c_readAck() {<br></td></tr
><tr
id=sl_svn1303_189

><td class="source">  return i2c_read(1);<br></td></tr
><tr
id=sl_svn1303_190

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_191

><td class="source"><br></td></tr
><tr
id=sl_svn1303_192

><td class="source">uint8_t i2c_readNak(void) {<br></td></tr
><tr
id=sl_svn1303_193

><td class="source">  return i2c_read(0);<br></td></tr
><tr
id=sl_svn1303_194

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_195

><td class="source"><br></td></tr
><tr
id=sl_svn1303_196

><td class="source">void waitTransmissionI2C() {<br></td></tr
><tr
id=sl_svn1303_197

><td class="source">  uint16_t count = 255;<br></td></tr
><tr
id=sl_svn1303_198

><td class="source">  while (!(TWCR &amp; (1&lt;&lt;TWINT))) {<br></td></tr
><tr
id=sl_svn1303_199

><td class="source">    count--;<br></td></tr
><tr
id=sl_svn1303_200

><td class="source">    if (count==0) {              //we are in a blocking state =&gt; we don&#39;t insist<br></td></tr
><tr
id=sl_svn1303_201

><td class="source">      TWCR = 0;                  //and we force a reset on TWINT register<br></td></tr
><tr
id=sl_svn1303_202

><td class="source">      neutralizeTime = micros(); //we take a timestamp here to neutralize the value during a short delay<br></td></tr
><tr
id=sl_svn1303_203

><td class="source">      i2c_errors_count++;<br></td></tr
><tr
id=sl_svn1303_204

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_205

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_206

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_207

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_208

><td class="source"><br></td></tr
><tr
id=sl_svn1303_209

><td class="source">size_t i2c_read_to_buf(uint8_t add, void *buf, size_t size) {<br></td></tr
><tr
id=sl_svn1303_210

><td class="source">  i2c_rep_start((add&lt;&lt;1) | 1);  // I2C read direction<br></td></tr
><tr
id=sl_svn1303_211

><td class="source">  size_t bytes_read = 0;<br></td></tr
><tr
id=sl_svn1303_212

><td class="source">  uint8_t *b = (uint8_t*)buf;<br></td></tr
><tr
id=sl_svn1303_213

><td class="source">  while (size--) {<br></td></tr
><tr
id=sl_svn1303_214

><td class="source">    /* acknowledge all but the final byte */<br></td></tr
><tr
id=sl_svn1303_215

><td class="source">    *b++ = i2c_read(size &gt; 0);<br></td></tr
><tr
id=sl_svn1303_216

><td class="source">    /* TODO catch I2C errors here and abort */<br></td></tr
><tr
id=sl_svn1303_217

><td class="source">    bytes_read++;<br></td></tr
><tr
id=sl_svn1303_218

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_219

><td class="source">  return bytes_read;<br></td></tr
><tr
id=sl_svn1303_220

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_221

><td class="source"><br></td></tr
><tr
id=sl_svn1303_222

><td class="source">size_t i2c_read_reg_to_buf(uint8_t add, uint8_t reg, void *buf, size_t size) {<br></td></tr
><tr
id=sl_svn1303_223

><td class="source">  i2c_rep_start(add&lt;&lt;1); // I2C write direction<br></td></tr
><tr
id=sl_svn1303_224

><td class="source">  i2c_write(reg);        // register selection<br></td></tr
><tr
id=sl_svn1303_225

><td class="source">  return i2c_read_to_buf(add, buf, size);<br></td></tr
><tr
id=sl_svn1303_226

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_227

><td class="source"><br></td></tr
><tr
id=sl_svn1303_228

><td class="source">/* transform a series of bytes from big endian to little<br></td></tr
><tr
id=sl_svn1303_229

><td class="source">   endian and vice versa. */<br></td></tr
><tr
id=sl_svn1303_230

><td class="source">void swap_endianness(void *buf, size_t size) {<br></td></tr
><tr
id=sl_svn1303_231

><td class="source">  /* we swap in-place, so we only have to<br></td></tr
><tr
id=sl_svn1303_232

><td class="source">  * place _one_ element on a temporary tray<br></td></tr
><tr
id=sl_svn1303_233

><td class="source">  */<br></td></tr
><tr
id=sl_svn1303_234

><td class="source">  uint8_t tray;<br></td></tr
><tr
id=sl_svn1303_235

><td class="source">  uint8_t *from;<br></td></tr
><tr
id=sl_svn1303_236

><td class="source">  uint8_t *to;<br></td></tr
><tr
id=sl_svn1303_237

><td class="source">  /* keep swapping until the pointers have assed each other */<br></td></tr
><tr
id=sl_svn1303_238

><td class="source">  for (from = (uint8_t*)buf, to = &amp;from[size-1]; from &lt; to; from++, to--) {<br></td></tr
><tr
id=sl_svn1303_239

><td class="source">    tray = *from;<br></td></tr
><tr
id=sl_svn1303_240

><td class="source">    *from = *to;<br></td></tr
><tr
id=sl_svn1303_241

><td class="source">    *to = tray;<br></td></tr
><tr
id=sl_svn1303_242

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_243

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_244

><td class="source"><br></td></tr
><tr
id=sl_svn1303_245

><td class="source">void i2c_getSixRawADC(uint8_t add, uint8_t reg) {<br></td></tr
><tr
id=sl_svn1303_246

><td class="source">  i2c_read_reg_to_buf(add, reg, &amp;rawADC, 6);<br></td></tr
><tr
id=sl_svn1303_247

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_248

><td class="source"><br></td></tr
><tr
id=sl_svn1303_249

><td class="source">void i2c_writeReg(uint8_t add, uint8_t reg, uint8_t val) {<br></td></tr
><tr
id=sl_svn1303_250

><td class="source">  i2c_rep_start(add&lt;&lt;1); // I2C write direction<br></td></tr
><tr
id=sl_svn1303_251

><td class="source">  i2c_write(reg);        // register selection<br></td></tr
><tr
id=sl_svn1303_252

><td class="source">  i2c_write(val);        // value to write in register<br></td></tr
><tr
id=sl_svn1303_253

><td class="source">  i2c_stop();<br></td></tr
><tr
id=sl_svn1303_254

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_255

><td class="source"><br></td></tr
><tr
id=sl_svn1303_256

><td class="source">uint8_t i2c_readReg(uint8_t add, uint8_t reg) {<br></td></tr
><tr
id=sl_svn1303_257

><td class="source">  uint8_t val;<br></td></tr
><tr
id=sl_svn1303_258

><td class="source">  i2c_read_reg_to_buf(add, reg, &amp;val, 1);<br></td></tr
><tr
id=sl_svn1303_259

><td class="source">  return val;<br></td></tr
><tr
id=sl_svn1303_260

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_261

><td class="source"><br></td></tr
><tr
id=sl_svn1303_262

><td class="source">// ****************<br></td></tr
><tr
id=sl_svn1303_263

><td class="source">// GYRO common part<br></td></tr
><tr
id=sl_svn1303_264

><td class="source">// ****************<br></td></tr
><tr
id=sl_svn1303_265

><td class="source">void GYRO_Common() {<br></td></tr
><tr
id=sl_svn1303_266

><td class="source">  static int16_t previousGyroADC[3] = {0,0,0};<br></td></tr
><tr
id=sl_svn1303_267

><td class="source">  static int32_t g[3];<br></td></tr
><tr
id=sl_svn1303_268

><td class="source">  uint8_t axis;<br></td></tr
><tr
id=sl_svn1303_269

><td class="source"><br></td></tr
><tr
id=sl_svn1303_270

><td class="source">#if defined MMGYRO       <br></td></tr
><tr
id=sl_svn1303_271

><td class="source">  // Moving Average Gyros by Magnetron1<br></td></tr
><tr
id=sl_svn1303_272

><td class="source">  //---------------------------------------------------<br></td></tr
><tr
id=sl_svn1303_273

><td class="source">  static int16_t mediaMobileGyroADC[3][MMGYROVECTORLENGHT];<br></td></tr
><tr
id=sl_svn1303_274

><td class="source">  static int32_t mediaMobileGyroADCSum[3];<br></td></tr
><tr
id=sl_svn1303_275

><td class="source">  static uint8_t mediaMobileGyroIDX;<br></td></tr
><tr
id=sl_svn1303_276

><td class="source">  //---------------------------------------------------<br></td></tr
><tr
id=sl_svn1303_277

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_278

><td class="source"><br></td></tr
><tr
id=sl_svn1303_279

><td class="source">  if (calibratingG&gt;0) {<br></td></tr
><tr
id=sl_svn1303_280

><td class="source">    for (axis = 0; axis &lt; 3; axis++) {<br></td></tr
><tr
id=sl_svn1303_281

><td class="source">      // Reset g[axis] at start of calibration<br></td></tr
><tr
id=sl_svn1303_282

><td class="source">      if (calibratingG == 400) g[axis]=0;<br></td></tr
><tr
id=sl_svn1303_283

><td class="source">      // Sum up 400 readings<br></td></tr
><tr
id=sl_svn1303_284

><td class="source">      g[axis] +=gyroADC[axis];<br></td></tr
><tr
id=sl_svn1303_285

><td class="source">      // Clear global variables for next reading<br></td></tr
><tr
id=sl_svn1303_286

><td class="source">      gyroADC[axis]=0;<br></td></tr
><tr
id=sl_svn1303_287

><td class="source">      gyroZero[axis]=0;<br></td></tr
><tr
id=sl_svn1303_288

><td class="source">      if (calibratingG == 1) {<br></td></tr
><tr
id=sl_svn1303_289

><td class="source">        gyroZero[axis]=g[axis]/400;<br></td></tr
><tr
id=sl_svn1303_290

><td class="source">        blinkLED(10,15,1);<br></td></tr
><tr
id=sl_svn1303_291

><td class="source">      #if defined(BUZZER)<br></td></tr
><tr
id=sl_svn1303_292

><td class="source">        notification_confirmation = 4;<br></td></tr
><tr
id=sl_svn1303_293

><td class="source">      #endif<br></td></tr
><tr
id=sl_svn1303_294

><td class="source">      }<br></td></tr
><tr
id=sl_svn1303_295

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_296

><td class="source">    calibratingG--;<br></td></tr
><tr
id=sl_svn1303_297

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_298

><td class="source"><br></td></tr
><tr
id=sl_svn1303_299

><td class="source">#ifdef MMGYRO       <br></td></tr
><tr
id=sl_svn1303_300

><td class="source">  mediaMobileGyroIDX = ++mediaMobileGyroIDX % MMGYROVECTORLENGHT;<br></td></tr
><tr
id=sl_svn1303_301

><td class="source">  for (axis = 0; axis &lt; 3; axis++) {<br></td></tr
><tr
id=sl_svn1303_302

><td class="source">    gyroADC[axis]  -= gyroZero[axis];<br></td></tr
><tr
id=sl_svn1303_303

><td class="source">    mediaMobileGyroADCSum[axis] -= mediaMobileGyroADC[axis][mediaMobileGyroIDX];<br></td></tr
><tr
id=sl_svn1303_304

><td class="source">    //anti gyro glitch, limit the variation between two consecutive readings<br></td></tr
><tr
id=sl_svn1303_305

><td class="source">    mediaMobileGyroADC[axis][mediaMobileGyroIDX] = constrain(gyroADC[axis],previousGyroADC[axis]-800,previousGyroADC[axis]+800);<br></td></tr
><tr
id=sl_svn1303_306

><td class="source">    mediaMobileGyroADCSum[axis] += mediaMobileGyroADC[axis][mediaMobileGyroIDX];<br></td></tr
><tr
id=sl_svn1303_307

><td class="source">    gyroADC[axis] = mediaMobileGyroADCSum[axis] / MMGYROVECTORLENGHT;<br></td></tr
><tr
id=sl_svn1303_308

><td class="source">#else <br></td></tr
><tr
id=sl_svn1303_309

><td class="source">  for (axis = 0; axis &lt; 3; axis++) {<br></td></tr
><tr
id=sl_svn1303_310

><td class="source">    gyroADC[axis]  -= gyroZero[axis];<br></td></tr
><tr
id=sl_svn1303_311

><td class="source">    //anti gyro glitch, limit the variation between two consecutive readings<br></td></tr
><tr
id=sl_svn1303_312

><td class="source">    gyroADC[axis] = constrain(gyroADC[axis],previousGyroADC[axis]-800,previousGyroADC[axis]+800);<br></td></tr
><tr
id=sl_svn1303_313

><td class="source">#endif    <br></td></tr
><tr
id=sl_svn1303_314

><td class="source">    previousGyroADC[axis] = gyroADC[axis];<br></td></tr
><tr
id=sl_svn1303_315

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_316

><td class="source"><br></td></tr
><tr
id=sl_svn1303_317

><td class="source">  #if defined(SENSORS_TILT_45DEG_LEFT)<br></td></tr
><tr
id=sl_svn1303_318

><td class="source">    int16_t temp  = ((gyroADC[PITCH] - gyroADC[ROLL] )*7)/10;<br></td></tr
><tr
id=sl_svn1303_319

><td class="source">    gyroADC[ROLL] = ((gyroADC[ROLL]  + gyroADC[PITCH])*7)/10;<br></td></tr
><tr
id=sl_svn1303_320

><td class="source">    gyroADC[PITCH]= temp;<br></td></tr
><tr
id=sl_svn1303_321

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_322

><td class="source">  #if defined(SENSORS_TILT_45DEG_RIGHT)<br></td></tr
><tr
id=sl_svn1303_323

><td class="source">    int16_t temp  = ((gyroADC[PITCH] + gyroADC[ROLL] )*7)/10;<br></td></tr
><tr
id=sl_svn1303_324

><td class="source">    gyroADC[ROLL] = ((gyroADC[ROLL]  - gyroADC[PITCH])*7)/10;<br></td></tr
><tr
id=sl_svn1303_325

><td class="source">    gyroADC[PITCH]= temp;<br></td></tr
><tr
id=sl_svn1303_326

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_327

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_328

><td class="source"><br></td></tr
><tr
id=sl_svn1303_329

><td class="source">// ****************<br></td></tr
><tr
id=sl_svn1303_330

><td class="source">// ACC common part<br></td></tr
><tr
id=sl_svn1303_331

><td class="source">// ****************<br></td></tr
><tr
id=sl_svn1303_332

><td class="source">void ACC_Common() {<br></td></tr
><tr
id=sl_svn1303_333

><td class="source">  static int32_t a[3];<br></td></tr
><tr
id=sl_svn1303_334

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_335

><td class="source">  if (calibratingA&gt;0) {<br></td></tr
><tr
id=sl_svn1303_336

><td class="source">    for (uint8_t axis = 0; axis &lt; 3; axis++) {<br></td></tr
><tr
id=sl_svn1303_337

><td class="source">      // Reset a[axis] at start of calibration<br></td></tr
><tr
id=sl_svn1303_338

><td class="source">      if (calibratingA == 400) a[axis]=0;<br></td></tr
><tr
id=sl_svn1303_339

><td class="source">      // Sum up 400 readings<br></td></tr
><tr
id=sl_svn1303_340

><td class="source">      a[axis] +=accADC[axis];<br></td></tr
><tr
id=sl_svn1303_341

><td class="source">      // Clear global variables for next reading<br></td></tr
><tr
id=sl_svn1303_342

><td class="source">      accADC[axis]=0;<br></td></tr
><tr
id=sl_svn1303_343

><td class="source">      global_conf.accZero[axis]=0;<br></td></tr
><tr
id=sl_svn1303_344

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_345

><td class="source">    // Calculate average, shift Z down by acc_1G and store values in EEPROM at end of calibration<br></td></tr
><tr
id=sl_svn1303_346

><td class="source">    if (calibratingA == 1) {<br></td></tr
><tr
id=sl_svn1303_347

><td class="source">      global_conf.accZero[ROLL]  = a[ROLL]/400;<br></td></tr
><tr
id=sl_svn1303_348

><td class="source">      global_conf.accZero[PITCH] = a[PITCH]/400;<br></td></tr
><tr
id=sl_svn1303_349

><td class="source">      global_conf.accZero[YAW]   = a[YAW]/400-acc_1G; // for nunchuk 200=1G<br></td></tr
><tr
id=sl_svn1303_350

><td class="source">      conf.angleTrim[ROLL]   = 0;<br></td></tr
><tr
id=sl_svn1303_351

><td class="source">      conf.angleTrim[PITCH]  = 0;<br></td></tr
><tr
id=sl_svn1303_352

><td class="source">      writeGlobalSet(1); // write accZero in EEPROM<br></td></tr
><tr
id=sl_svn1303_353

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_354

><td class="source">    calibratingA--;<br></td></tr
><tr
id=sl_svn1303_355

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_356

><td class="source">  #if defined(INFLIGHT_ACC_CALIBRATION)<br></td></tr
><tr
id=sl_svn1303_357

><td class="source">      static int32_t b[3];<br></td></tr
><tr
id=sl_svn1303_358

><td class="source">      static int16_t accZero_saved[3]  = {0,0,0};<br></td></tr
><tr
id=sl_svn1303_359

><td class="source">      static int16_t  angleTrim_saved[2] = {0, 0};<br></td></tr
><tr
id=sl_svn1303_360

><td class="source">      //Saving old zeropoints before measurement<br></td></tr
><tr
id=sl_svn1303_361

><td class="source">      if (InflightcalibratingA==50) {<br></td></tr
><tr
id=sl_svn1303_362

><td class="source">         accZero_saved[ROLL]  = global_conf.accZero[ROLL] ;<br></td></tr
><tr
id=sl_svn1303_363

><td class="source">         accZero_saved[PITCH] = global_conf.accZero[PITCH];<br></td></tr
><tr
id=sl_svn1303_364

><td class="source">         accZero_saved[YAW]   = global_conf.accZero[YAW] ;<br></td></tr
><tr
id=sl_svn1303_365

><td class="source">         angleTrim_saved[ROLL]  = conf.angleTrim[ROLL] ;<br></td></tr
><tr
id=sl_svn1303_366

><td class="source">         angleTrim_saved[PITCH] = conf.angleTrim[PITCH] ;<br></td></tr
><tr
id=sl_svn1303_367

><td class="source">      }<br></td></tr
><tr
id=sl_svn1303_368

><td class="source">      if (InflightcalibratingA&gt;0) {<br></td></tr
><tr
id=sl_svn1303_369

><td class="source">        for (uint8_t axis = 0; axis &lt; 3; axis++) {<br></td></tr
><tr
id=sl_svn1303_370

><td class="source">          // Reset a[axis] at start of calibration<br></td></tr
><tr
id=sl_svn1303_371

><td class="source">          if (InflightcalibratingA == 50) b[axis]=0;<br></td></tr
><tr
id=sl_svn1303_372

><td class="source">          // Sum up 50 readings<br></td></tr
><tr
id=sl_svn1303_373

><td class="source">          b[axis] +=accADC[axis];<br></td></tr
><tr
id=sl_svn1303_374

><td class="source">          // Clear global variables for next reading<br></td></tr
><tr
id=sl_svn1303_375

><td class="source">          accADC[axis]=0;<br></td></tr
><tr
id=sl_svn1303_376

><td class="source">          global_conf.accZero[axis]=0;<br></td></tr
><tr
id=sl_svn1303_377

><td class="source">        }<br></td></tr
><tr
id=sl_svn1303_378

><td class="source">        //all values are measured<br></td></tr
><tr
id=sl_svn1303_379

><td class="source">        if (InflightcalibratingA == 1) {<br></td></tr
><tr
id=sl_svn1303_380

><td class="source">          AccInflightCalibrationActive = 0;<br></td></tr
><tr
id=sl_svn1303_381

><td class="source">          AccInflightCalibrationMeasurementDone = 1;<br></td></tr
><tr
id=sl_svn1303_382

><td class="source">          #if defined(BUZZER)<br></td></tr
><tr
id=sl_svn1303_383

><td class="source">            notification_confirmation = 1;      //buzzer for indicatiing the end of calibration<br></td></tr
><tr
id=sl_svn1303_384

><td class="source">          #endif<br></td></tr
><tr
id=sl_svn1303_385

><td class="source">          // recover saved values to maintain current flight behavior until new values are transferred<br></td></tr
><tr
id=sl_svn1303_386

><td class="source">          global_conf.accZero[ROLL]  = accZero_saved[ROLL] ;<br></td></tr
><tr
id=sl_svn1303_387

><td class="source">          global_conf.accZero[PITCH] = accZero_saved[PITCH];<br></td></tr
><tr
id=sl_svn1303_388

><td class="source">          global_conf.accZero[YAW]   = accZero_saved[YAW] ;<br></td></tr
><tr
id=sl_svn1303_389

><td class="source">          conf.angleTrim[ROLL]  = angleTrim_saved[ROLL] ;<br></td></tr
><tr
id=sl_svn1303_390

><td class="source">          conf.angleTrim[PITCH] = angleTrim_saved[PITCH] ;<br></td></tr
><tr
id=sl_svn1303_391

><td class="source">        }<br></td></tr
><tr
id=sl_svn1303_392

><td class="source">        InflightcalibratingA--;<br></td></tr
><tr
id=sl_svn1303_393

><td class="source">      }<br></td></tr
><tr
id=sl_svn1303_394

><td class="source">      // Calculate average, shift Z down by acc_1G and store values in EEPROM at end of calibration<br></td></tr
><tr
id=sl_svn1303_395

><td class="source">      if (AccInflightCalibrationSavetoEEProm == 1){  //the copter is landed, disarmed and the combo has been done again<br></td></tr
><tr
id=sl_svn1303_396

><td class="source">        AccInflightCalibrationSavetoEEProm = 0;<br></td></tr
><tr
id=sl_svn1303_397

><td class="source">        global_conf.accZero[ROLL]  = b[ROLL]/50;<br></td></tr
><tr
id=sl_svn1303_398

><td class="source">        global_conf.accZero[PITCH] = b[PITCH]/50;<br></td></tr
><tr
id=sl_svn1303_399

><td class="source">        global_conf.accZero[YAW]   = b[YAW]/50-acc_1G; // for nunchuk 200=1G<br></td></tr
><tr
id=sl_svn1303_400

><td class="source">        conf.angleTrim[ROLL]   = 0;<br></td></tr
><tr
id=sl_svn1303_401

><td class="source">        conf.angleTrim[PITCH]  = 0;<br></td></tr
><tr
id=sl_svn1303_402

><td class="source">        writeGlobalSet(1); // write accZero in EEPROM<br></td></tr
><tr
id=sl_svn1303_403

><td class="source">      }<br></td></tr
><tr
id=sl_svn1303_404

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_405

><td class="source">  accADC[ROLL]  -=  global_conf.accZero[ROLL] ;<br></td></tr
><tr
id=sl_svn1303_406

><td class="source">  accADC[PITCH] -=  global_conf.accZero[PITCH];<br></td></tr
><tr
id=sl_svn1303_407

><td class="source">  accADC[YAW]   -=  global_conf.accZero[YAW] ;<br></td></tr
><tr
id=sl_svn1303_408

><td class="source"><br></td></tr
><tr
id=sl_svn1303_409

><td class="source">  #if defined(SENSORS_TILT_45DEG_LEFT)<br></td></tr
><tr
id=sl_svn1303_410

><td class="source">    int16_t temp = ((accADC[PITCH] - accADC[ROLL] )*7)/10;<br></td></tr
><tr
id=sl_svn1303_411

><td class="source">    accADC[ROLL] = ((accADC[ROLL]  + accADC[PITCH])*7)/10;<br></td></tr
><tr
id=sl_svn1303_412

><td class="source">    accADC[PITCH] = temp;<br></td></tr
><tr
id=sl_svn1303_413

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_414

><td class="source">  #if defined(SENSORS_TILT_45DEG_RIGHT)<br></td></tr
><tr
id=sl_svn1303_415

><td class="source">    int16_t temp = ((accADC[PITCH] + accADC[ROLL] )*7)/10;<br></td></tr
><tr
id=sl_svn1303_416

><td class="source">    accADC[ROLL] = ((accADC[ROLL]  - accADC[PITCH])*7)/10;<br></td></tr
><tr
id=sl_svn1303_417

><td class="source">    accADC[PITCH] = temp;<br></td></tr
><tr
id=sl_svn1303_418

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_419

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_420

><td class="source"><br></td></tr
><tr
id=sl_svn1303_421

><td class="source"><br></td></tr
><tr
id=sl_svn1303_422

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_423

><td class="source">// I2C Barometer BOSCH BMP085<br></td></tr
><tr
id=sl_svn1303_424

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_425

><td class="source">// I2C adress: 0x77 (7bit)<br></td></tr
><tr
id=sl_svn1303_426

><td class="source">// principle:<br></td></tr
><tr
id=sl_svn1303_427

><td class="source">//  1) read the calibration register (only once at the initialization)<br></td></tr
><tr
id=sl_svn1303_428

><td class="source">//  2) read uncompensated temperature (not mandatory at every cycle)<br></td></tr
><tr
id=sl_svn1303_429

><td class="source">//  3) read uncompensated pressure<br></td></tr
><tr
id=sl_svn1303_430

><td class="source">//  4) raw temp + raw pressure =&gt; calculation of the adjusted pressure<br></td></tr
><tr
id=sl_svn1303_431

><td class="source">//  the following code uses the maximum precision setting (oversampling setting 3)<br></td></tr
><tr
id=sl_svn1303_432

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_433

><td class="source"><br></td></tr
><tr
id=sl_svn1303_434

><td class="source">#if defined(BMP085)<br></td></tr
><tr
id=sl_svn1303_435

><td class="source">#define BMP085_ADDRESS 0x77<br></td></tr
><tr
id=sl_svn1303_436

><td class="source">static int32_t  pressure;<br></td></tr
><tr
id=sl_svn1303_437

><td class="source"><br></td></tr
><tr
id=sl_svn1303_438

><td class="source">static struct {<br></td></tr
><tr
id=sl_svn1303_439

><td class="source">  // sensor registers from the BOSCH BMP085 datasheet<br></td></tr
><tr
id=sl_svn1303_440

><td class="source">  int16_t  ac1, ac2, ac3;<br></td></tr
><tr
id=sl_svn1303_441

><td class="source">  uint16_t ac4, ac5, ac6;<br></td></tr
><tr
id=sl_svn1303_442

><td class="source">  int16_t  b1, b2, mb, mc, md;<br></td></tr
><tr
id=sl_svn1303_443

><td class="source">  union {uint16_t val; uint8_t raw[2]; } ut; //uncompensated T<br></td></tr
><tr
id=sl_svn1303_444

><td class="source">  union {uint32_t val; uint8_t raw[4]; } up; //uncompensated P<br></td></tr
><tr
id=sl_svn1303_445

><td class="source">  uint8_t  state;<br></td></tr
><tr
id=sl_svn1303_446

><td class="source">  uint32_t deadline;<br></td></tr
><tr
id=sl_svn1303_447

><td class="source">} bmp085_ctx;  <br></td></tr
><tr
id=sl_svn1303_448

><td class="source">#define OSS 2 //we can get more unique samples and get better precision using average<br></td></tr
><tr
id=sl_svn1303_449

><td class="source"><br></td></tr
><tr
id=sl_svn1303_450

><td class="source">void i2c_BMP085_readCalibration(){<br></td></tr
><tr
id=sl_svn1303_451

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_452

><td class="source">  //read calibration data in one go<br></td></tr
><tr
id=sl_svn1303_453

><td class="source">  size_t s_bytes = (uint8_t*)&amp;bmp085_ctx.md - (uint8_t*)&amp;bmp085_ctx.ac1 + sizeof(bmp085_ctx.ac1);<br></td></tr
><tr
id=sl_svn1303_454

><td class="source">  i2c_read_reg_to_buf(BMP085_ADDRESS, 0xAA, &amp;bmp085_ctx.ac1, s_bytes);<br></td></tr
><tr
id=sl_svn1303_455

><td class="source">  // now fix endianness<br></td></tr
><tr
id=sl_svn1303_456

><td class="source">  int16_t *p;<br></td></tr
><tr
id=sl_svn1303_457

><td class="source">  for (p = &amp;bmp085_ctx.ac1; p &lt;= &amp;bmp085_ctx.md; p++) {<br></td></tr
><tr
id=sl_svn1303_458

><td class="source">    swap_endianness(p, sizeof(*p));<br></td></tr
><tr
id=sl_svn1303_459

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_460

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_461

><td class="source"><br></td></tr
><tr
id=sl_svn1303_462

><td class="source">void  Baro_init() {<br></td></tr
><tr
id=sl_svn1303_463

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_464

><td class="source">  i2c_BMP085_readCalibration();<br></td></tr
><tr
id=sl_svn1303_465

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_466

><td class="source">  i2c_BMP085_UT_Start(); <br></td></tr
><tr
id=sl_svn1303_467

><td class="source">//  delay(5);<br></td></tr
><tr
id=sl_svn1303_468

><td class="source">//  i2c_BMP085_UT_Read();<br></td></tr
><tr
id=sl_svn1303_469

><td class="source">  bmp085_ctx.deadline = currentTime+5000;<br></td></tr
><tr
id=sl_svn1303_470

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_471

><td class="source"><br></td></tr
><tr
id=sl_svn1303_472

><td class="source">// read uncompensated temperature value: send command first<br></td></tr
><tr
id=sl_svn1303_473

><td class="source">void i2c_BMP085_UT_Start() {<br></td></tr
><tr
id=sl_svn1303_474

><td class="source">  i2c_writeReg(BMP085_ADDRESS,0xf4,0x2e);<br></td></tr
><tr
id=sl_svn1303_475

><td class="source">  i2c_rep_start(BMP085_ADDRESS&lt;&lt;1);<br></td></tr
><tr
id=sl_svn1303_476

><td class="source">  i2c_write(0xF6);<br></td></tr
><tr
id=sl_svn1303_477

><td class="source">  i2c_stop();<br></td></tr
><tr
id=sl_svn1303_478

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_479

><td class="source"><br></td></tr
><tr
id=sl_svn1303_480

><td class="source">// read uncompensated pressure value: send command first<br></td></tr
><tr
id=sl_svn1303_481

><td class="source">void i2c_BMP085_UP_Start () {<br></td></tr
><tr
id=sl_svn1303_482

><td class="source">  i2c_writeReg(BMP085_ADDRESS,0xf4,0x34+(OSS&lt;&lt;6)); // control register value for oversampling setting 3<br></td></tr
><tr
id=sl_svn1303_483

><td class="source">  i2c_rep_start(BMP085_ADDRESS&lt;&lt;1); //I2C write direction =&gt; 0<br></td></tr
><tr
id=sl_svn1303_484

><td class="source">  i2c_write(0xF6);<br></td></tr
><tr
id=sl_svn1303_485

><td class="source">  i2c_stop();<br></td></tr
><tr
id=sl_svn1303_486

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_487

><td class="source"><br></td></tr
><tr
id=sl_svn1303_488

><td class="source">// read uncompensated pressure value: read result bytes<br></td></tr
><tr
id=sl_svn1303_489

><td class="source">// the datasheet suggests a delay of 25.5 ms (oversampling settings 3) after the send command<br></td></tr
><tr
id=sl_svn1303_490

><td class="source">void i2c_BMP085_UP_Read () {<br></td></tr
><tr
id=sl_svn1303_491

><td class="source">  i2c_rep_start((BMP085_ADDRESS&lt;&lt;1) | 1);//I2C read direction =&gt; 1<br></td></tr
><tr
id=sl_svn1303_492

><td class="source">  bmp085_ctx.up.raw[2] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_493

><td class="source">  bmp085_ctx.up.raw[1] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_494

><td class="source">  bmp085_ctx.up.raw[0] = i2c_readNak();<br></td></tr
><tr
id=sl_svn1303_495

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_496

><td class="source"><br></td></tr
><tr
id=sl_svn1303_497

><td class="source">// read uncompensated temperature value: read result bytes<br></td></tr
><tr
id=sl_svn1303_498

><td class="source">// the datasheet suggests a delay of 4.5 ms after the send command<br></td></tr
><tr
id=sl_svn1303_499

><td class="source">void i2c_BMP085_UT_Read() {<br></td></tr
><tr
id=sl_svn1303_500

><td class="source">  i2c_rep_start((BMP085_ADDRESS&lt;&lt;1) | 1);//I2C read direction =&gt; 1<br></td></tr
><tr
id=sl_svn1303_501

><td class="source">  bmp085_ctx.ut.raw[1] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_502

><td class="source">  bmp085_ctx.ut.raw[0] = i2c_readNak();<br></td></tr
><tr
id=sl_svn1303_503

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_504

><td class="source"><br></td></tr
><tr
id=sl_svn1303_505

><td class="source">void i2c_BMP085_Calculate() {<br></td></tr
><tr
id=sl_svn1303_506

><td class="source">  int32_t  x1, x2, x3, b3, b5, b6, p, tmp;<br></td></tr
><tr
id=sl_svn1303_507

><td class="source">  uint32_t b4, b7;<br></td></tr
><tr
id=sl_svn1303_508

><td class="source">  // Temperature calculations<br></td></tr
><tr
id=sl_svn1303_509

><td class="source">  x1 = ((int32_t)bmp085_ctx.ut.val - bmp085_ctx.ac6) * bmp085_ctx.ac5 &gt;&gt; 15;<br></td></tr
><tr
id=sl_svn1303_510

><td class="source">  x2 = ((int32_t)bmp085_ctx.mc &lt;&lt; 11) / (x1 + bmp085_ctx.md);<br></td></tr
><tr
id=sl_svn1303_511

><td class="source">  b5 = x1 + x2;<br></td></tr
><tr
id=sl_svn1303_512

><td class="source">  // Pressure calculations<br></td></tr
><tr
id=sl_svn1303_513

><td class="source">  b6 = b5 - 4000;<br></td></tr
><tr
id=sl_svn1303_514

><td class="source">  x1 = (bmp085_ctx.b2 * (b6 * b6 &gt;&gt; 12)) &gt;&gt; 11; <br></td></tr
><tr
id=sl_svn1303_515

><td class="source">  x2 = bmp085_ctx.ac2 * b6 &gt;&gt; 11;<br></td></tr
><tr
id=sl_svn1303_516

><td class="source">  x3 = x1 + x2;<br></td></tr
><tr
id=sl_svn1303_517

><td class="source">  tmp = bmp085_ctx.ac1;<br></td></tr
><tr
id=sl_svn1303_518

><td class="source">  tmp = (tmp*4 + x3) &lt;&lt; OSS;<br></td></tr
><tr
id=sl_svn1303_519

><td class="source">  b3 = (tmp+2)/4;<br></td></tr
><tr
id=sl_svn1303_520

><td class="source">  x1 = bmp085_ctx.ac3 * b6 &gt;&gt; 13;<br></td></tr
><tr
id=sl_svn1303_521

><td class="source">  x2 = (bmp085_ctx.b1 * (b6 * b6 &gt;&gt; 12)) &gt;&gt; 16;<br></td></tr
><tr
id=sl_svn1303_522

><td class="source">  x3 = ((x1 + x2) + 2) &gt;&gt; 2;<br></td></tr
><tr
id=sl_svn1303_523

><td class="source">  b4 = (bmp085_ctx.ac4 * (uint32_t)(x3 + 32768)) &gt;&gt; 15;<br></td></tr
><tr
id=sl_svn1303_524

><td class="source">  b7 = ((uint32_t) (bmp085_ctx.up.val &gt;&gt; (8-OSS)) - b3) * (50000 &gt;&gt; OSS);<br></td></tr
><tr
id=sl_svn1303_525

><td class="source">  p = b7 &lt; 0x80000000 ? (b7 * 2) / b4 : (b7 / b4) * 2;<br></td></tr
><tr
id=sl_svn1303_526

><td class="source">  x1 = (p &gt;&gt; 8) * (p &gt;&gt; 8);<br></td></tr
><tr
id=sl_svn1303_527

><td class="source">  x1 = (x1 * 3038) &gt;&gt; 16;<br></td></tr
><tr
id=sl_svn1303_528

><td class="source">  x2 = (-7357 * p) &gt;&gt; 16;<br></td></tr
><tr
id=sl_svn1303_529

><td class="source">  pressure = p + ((x1 + x2 + 3791) &gt;&gt; 4);<br></td></tr
><tr
id=sl_svn1303_530

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_531

><td class="source"><br></td></tr
><tr
id=sl_svn1303_532

><td class="source">void Baro_update() {                   // first UT conversion is started in init procedure<br></td></tr
><tr
id=sl_svn1303_533

><td class="source">  if (currentTime &lt; bmp085_ctx.deadline) return; <br></td></tr
><tr
id=sl_svn1303_534

><td class="source">  bmp085_ctx.deadline = currentTime+6000;<br></td></tr
><tr
id=sl_svn1303_535

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz, BMP085 is ok with this speed<br></td></tr
><tr
id=sl_svn1303_536

><td class="source">  if (bmp085_ctx.state == 0) {<br></td></tr
><tr
id=sl_svn1303_537

><td class="source">    i2c_BMP085_UT_Read(); <br></td></tr
><tr
id=sl_svn1303_538

><td class="source">    i2c_BMP085_UP_Start(); <br></td></tr
><tr
id=sl_svn1303_539

><td class="source">    bmp085_ctx.state = 1; <br></td></tr
><tr
id=sl_svn1303_540

><td class="source">    BaroAlt = (1.0f - pow(pressure/101325.0f, 0.190295f)) * 4433000.0f; //centimeter   , moved here for less timecycle spike<br></td></tr
><tr
id=sl_svn1303_541

><td class="source">    bmp085_ctx.deadline += 8000;   // 6000+8000=14000<br></td></tr
><tr
id=sl_svn1303_542

><td class="source">  } else {<br></td></tr
><tr
id=sl_svn1303_543

><td class="source">    i2c_BMP085_UP_Read(); <br></td></tr
><tr
id=sl_svn1303_544

><td class="source">    i2c_BMP085_UT_Start(); <br></td></tr
><tr
id=sl_svn1303_545

><td class="source">    i2c_BMP085_Calculate(); <br></td></tr
><tr
id=sl_svn1303_546

><td class="source">//    BaroAlt = (1.0f - pow(pressure/101325.0f, 0.190295f)) * 4433000.0f; //centimeter<br></td></tr
><tr
id=sl_svn1303_547

><td class="source">    bmp085_ctx.state = 0; <br></td></tr
><tr
id=sl_svn1303_548

><td class="source">  } <br></td></tr
><tr
id=sl_svn1303_549

><td class="source">/*<br></td></tr
><tr
id=sl_svn1303_550

><td class="source">  switch (bmp085_ctx.state) {<br></td></tr
><tr
id=sl_svn1303_551

><td class="source">    case 0: <br></td></tr
><tr
id=sl_svn1303_552

><td class="source">      i2c_BMP085_UT_Start(); <br></td></tr
><tr
id=sl_svn1303_553

><td class="source">      bmp085_ctx.state++; bmp085_ctx.deadline += 4600; <br></td></tr
><tr
id=sl_svn1303_554

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_555

><td class="source">    case 1: <br></td></tr
><tr
id=sl_svn1303_556

><td class="source">      i2c_BMP085_UT_Read(); <br></td></tr
><tr
id=sl_svn1303_557

><td class="source">      bmp085_ctx.state++; <br></td></tr
><tr
id=sl_svn1303_558

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_559

><td class="source">    case 2: <br></td></tr
><tr
id=sl_svn1303_560

><td class="source">      i2c_BMP085_UP_Start(); <br></td></tr
><tr
id=sl_svn1303_561

><td class="source">      bmp085_ctx.state++; bmp085_ctx.deadline += 14000; <br></td></tr
><tr
id=sl_svn1303_562

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_563

><td class="source">    case 3: <br></td></tr
><tr
id=sl_svn1303_564

><td class="source">      i2c_BMP085_UP_Read(); <br></td></tr
><tr
id=sl_svn1303_565

><td class="source">      i2c_BMP085_Calculate(); <br></td></tr
><tr
id=sl_svn1303_566

><td class="source">      BaroAlt = (1.0f - pow(pressure/101325.0f, 0.190295f)) * 4433000.0f; //centimeter<br></td></tr
><tr
id=sl_svn1303_567

><td class="source">      bmp085_ctx.state = 0; bmp085_ctx.deadline += 5000; <br></td></tr
><tr
id=sl_svn1303_568

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_569

><td class="source">  } <br></td></tr
><tr
id=sl_svn1303_570

><td class="source">*/  <br></td></tr
><tr
id=sl_svn1303_571

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_572

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_573

><td class="source"><br></td></tr
><tr
id=sl_svn1303_574

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_575

><td class="source">// I2C Barometer MS561101BA<br></td></tr
><tr
id=sl_svn1303_576

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_577

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_578

><td class="source">// specs are here: http://www.meas-spec.com/downloads/MS5611-01BA03.pdf<br></td></tr
><tr
id=sl_svn1303_579

><td class="source">// useful info on pages 7 -&gt; 12<br></td></tr
><tr
id=sl_svn1303_580

><td class="source">#if defined(MS561101BA)<br></td></tr
><tr
id=sl_svn1303_581

><td class="source"><br></td></tr
><tr
id=sl_svn1303_582

><td class="source">// registers of the device<br></td></tr
><tr
id=sl_svn1303_583

><td class="source">#define MS561101BA_PRESSURE    0x40<br></td></tr
><tr
id=sl_svn1303_584

><td class="source">#define MS561101BA_TEMPERATURE 0x50<br></td></tr
><tr
id=sl_svn1303_585

><td class="source">#define MS561101BA_RESET       0x1E<br></td></tr
><tr
id=sl_svn1303_586

><td class="source"><br></td></tr
><tr
id=sl_svn1303_587

><td class="source">// OSR (Over Sampling Ratio) constants<br></td></tr
><tr
id=sl_svn1303_588

><td class="source">#define MS561101BA_OSR_256  0x00<br></td></tr
><tr
id=sl_svn1303_589

><td class="source">#define MS561101BA_OSR_512  0x02<br></td></tr
><tr
id=sl_svn1303_590

><td class="source">#define MS561101BA_OSR_1024 0x04<br></td></tr
><tr
id=sl_svn1303_591

><td class="source">#define MS561101BA_OSR_2048 0x06<br></td></tr
><tr
id=sl_svn1303_592

><td class="source">#define MS561101BA_OSR_4096 0x08<br></td></tr
><tr
id=sl_svn1303_593

><td class="source"><br></td></tr
><tr
id=sl_svn1303_594

><td class="source">#define OSR MS561101BA_OSR_4096<br></td></tr
><tr
id=sl_svn1303_595

><td class="source">static int32_t  pressure;<br></td></tr
><tr
id=sl_svn1303_596

><td class="source"><br></td></tr
><tr
id=sl_svn1303_597

><td class="source">static struct {<br></td></tr
><tr
id=sl_svn1303_598

><td class="source">  // sensor registers from the MS561101BA datasheet<br></td></tr
><tr
id=sl_svn1303_599

><td class="source">  uint16_t c[7];<br></td></tr
><tr
id=sl_svn1303_600

><td class="source">  union {uint32_t val; uint8_t raw[4]; } ut; //uncompensated T<br></td></tr
><tr
id=sl_svn1303_601

><td class="source">  union {uint32_t val; uint8_t raw[4]; } up; //uncompensated P<br></td></tr
><tr
id=sl_svn1303_602

><td class="source">  uint8_t  state;<br></td></tr
><tr
id=sl_svn1303_603

><td class="source">  uint32_t deadline;<br></td></tr
><tr
id=sl_svn1303_604

><td class="source">} ms561101ba_ctx;<br></td></tr
><tr
id=sl_svn1303_605

><td class="source"><br></td></tr
><tr
id=sl_svn1303_606

><td class="source">void i2c_MS561101BA_reset(){<br></td></tr
><tr
id=sl_svn1303_607

><td class="source">  i2c_writeReg(MS561101BA_ADDRESS, MS561101BA_RESET, 0);<br></td></tr
><tr
id=sl_svn1303_608

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_609

><td class="source"><br></td></tr
><tr
id=sl_svn1303_610

><td class="source">void i2c_MS561101BA_readCalibration(){<br></td></tr
><tr
id=sl_svn1303_611

><td class="source">  union {uint16_t val; uint8_t raw[2]; } data;<br></td></tr
><tr
id=sl_svn1303_612

><td class="source">  for(uint8_t i=0;i&lt;6;i++) {<br></td></tr
><tr
id=sl_svn1303_613

><td class="source">    i2c_rep_start(MS561101BA_ADDRESS&lt;&lt;1);<br></td></tr
><tr
id=sl_svn1303_614

><td class="source">    i2c_write(0xA2+2*i);<br></td></tr
><tr
id=sl_svn1303_615

><td class="source">    delay(10);<br></td></tr
><tr
id=sl_svn1303_616

><td class="source">    i2c_rep_start((MS561101BA_ADDRESS&lt;&lt;1) | 1);//I2C read direction =&gt; 1<br></td></tr
><tr
id=sl_svn1303_617

><td class="source">    delay(10);<br></td></tr
><tr
id=sl_svn1303_618

><td class="source">    data.raw[1] = i2c_readAck();  // read a 16 bit register<br></td></tr
><tr
id=sl_svn1303_619

><td class="source">    data.raw[0] = i2c_readNak();<br></td></tr
><tr
id=sl_svn1303_620

><td class="source">    ms561101ba_ctx.c[i+1] = data.val;<br></td></tr
><tr
id=sl_svn1303_621

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_622

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_623

><td class="source"><br></td></tr
><tr
id=sl_svn1303_624

><td class="source">void  Baro_init() {<br></td></tr
><tr
id=sl_svn1303_625

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_626

><td class="source">  i2c_MS561101BA_reset();<br></td></tr
><tr
id=sl_svn1303_627

><td class="source">  delay(100);<br></td></tr
><tr
id=sl_svn1303_628

><td class="source">  i2c_MS561101BA_readCalibration();<br></td></tr
><tr
id=sl_svn1303_629

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_630

><td class="source">  i2c_MS561101BA_UT_Start(); <br></td></tr
><tr
id=sl_svn1303_631

><td class="source">  ms561101ba_ctx.deadline = currentTime+10000; <br></td></tr
><tr
id=sl_svn1303_632

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_633

><td class="source"><br></td></tr
><tr
id=sl_svn1303_634

><td class="source">// read uncompensated temperature value: send command first<br></td></tr
><tr
id=sl_svn1303_635

><td class="source">void i2c_MS561101BA_UT_Start() {<br></td></tr
><tr
id=sl_svn1303_636

><td class="source">  i2c_rep_start(MS561101BA_ADDRESS&lt;&lt;1);      // I2C write direction<br></td></tr
><tr
id=sl_svn1303_637

><td class="source">  i2c_write(MS561101BA_TEMPERATURE + OSR);  // register selection<br></td></tr
><tr
id=sl_svn1303_638

><td class="source">  i2c_stop();<br></td></tr
><tr
id=sl_svn1303_639

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_640

><td class="source"><br></td></tr
><tr
id=sl_svn1303_641

><td class="source">// read uncompensated pressure value: send command first<br></td></tr
><tr
id=sl_svn1303_642

><td class="source">void i2c_MS561101BA_UP_Start () {<br></td></tr
><tr
id=sl_svn1303_643

><td class="source">  i2c_rep_start(MS561101BA_ADDRESS&lt;&lt;1);      // I2C write direction<br></td></tr
><tr
id=sl_svn1303_644

><td class="source">  i2c_write(MS561101BA_PRESSURE + OSR);     // register selection<br></td></tr
><tr
id=sl_svn1303_645

><td class="source">  i2c_stop();<br></td></tr
><tr
id=sl_svn1303_646

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_647

><td class="source"><br></td></tr
><tr
id=sl_svn1303_648

><td class="source">// read uncompensated pressure value: read result bytes<br></td></tr
><tr
id=sl_svn1303_649

><td class="source">void i2c_MS561101BA_UP_Read () {<br></td></tr
><tr
id=sl_svn1303_650

><td class="source">  i2c_rep_start(MS561101BA_ADDRESS&lt;&lt;1);<br></td></tr
><tr
id=sl_svn1303_651

><td class="source">  i2c_write(0);<br></td></tr
><tr
id=sl_svn1303_652

><td class="source">  i2c_rep_start((MS561101BA_ADDRESS&lt;&lt;1) | 1);<br></td></tr
><tr
id=sl_svn1303_653

><td class="source">  ms561101ba_ctx.up.raw[2] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_654

><td class="source">  ms561101ba_ctx.up.raw[1] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_655

><td class="source">  ms561101ba_ctx.up.raw[0] = i2c_readNak();<br></td></tr
><tr
id=sl_svn1303_656

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_657

><td class="source"><br></td></tr
><tr
id=sl_svn1303_658

><td class="source">// read uncompensated temperature value: read result bytes<br></td></tr
><tr
id=sl_svn1303_659

><td class="source">void i2c_MS561101BA_UT_Read() {<br></td></tr
><tr
id=sl_svn1303_660

><td class="source">  i2c_rep_start(MS561101BA_ADDRESS&lt;&lt;1);<br></td></tr
><tr
id=sl_svn1303_661

><td class="source">  i2c_write(0);<br></td></tr
><tr
id=sl_svn1303_662

><td class="source">  i2c_rep_start((MS561101BA_ADDRESS&lt;&lt;1) | 1);<br></td></tr
><tr
id=sl_svn1303_663

><td class="source">  ms561101ba_ctx.ut.raw[2] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_664

><td class="source">  ms561101ba_ctx.ut.raw[1] = i2c_readAck();<br></td></tr
><tr
id=sl_svn1303_665

><td class="source">  ms561101ba_ctx.ut.raw[0] = i2c_readNak();<br></td></tr
><tr
id=sl_svn1303_666

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_667

><td class="source"><br></td></tr
><tr
id=sl_svn1303_668

><td class="source">void i2c_MS561101BA_Calculate() {<br></td></tr
><tr
id=sl_svn1303_669

><td class="source">  int32_t temperature,off2=0,sens2=0,delt;<br></td></tr
><tr
id=sl_svn1303_670

><td class="source"><br></td></tr
><tr
id=sl_svn1303_671

><td class="source">  int32_t dT   = ms561101ba_ctx.ut.val - ((uint32_t)ms561101ba_ctx.c[5] &lt;&lt; 8);<br></td></tr
><tr
id=sl_svn1303_672

><td class="source">  int64_t off  = ((uint32_t)ms561101ba_ctx.c[2] &lt;&lt;16) + (((int64_t)dT * ms561101ba_ctx.c[4]) &gt;&gt; 7);<br></td></tr
><tr
id=sl_svn1303_673

><td class="source">  int64_t sens = ((uint32_t)ms561101ba_ctx.c[1] &lt;&lt;15) + (((int64_t)dT * ms561101ba_ctx.c[3]) &gt;&gt; 8);<br></td></tr
><tr
id=sl_svn1303_674

><td class="source">  temperature  = 2000 + (((int64_t)dT * ms561101ba_ctx.c[6])&gt;&gt;23);<br></td></tr
><tr
id=sl_svn1303_675

><td class="source"><br></td></tr
><tr
id=sl_svn1303_676

><td class="source">  if (temperature &lt; 2000) { // temperature lower than 20st.C <br></td></tr
><tr
id=sl_svn1303_677

><td class="source">    delt = temperature-2000;<br></td></tr
><tr
id=sl_svn1303_678

><td class="source">    delt  = delt*delt;<br></td></tr
><tr
id=sl_svn1303_679

><td class="source">    off2  = (5 * delt)&gt;&gt;1; <br></td></tr
><tr
id=sl_svn1303_680

><td class="source">    sens2 = (5 * delt)&gt;&gt;2; <br></td></tr
><tr
id=sl_svn1303_681

><td class="source">    if (temperature &lt; -1500) { // temperature lower than -15st.C<br></td></tr
><tr
id=sl_svn1303_682

><td class="source">      delt  = temperature+1500;<br></td></tr
><tr
id=sl_svn1303_683

><td class="source">      delt  = delt*delt;<br></td></tr
><tr
id=sl_svn1303_684

><td class="source">      off2  += 7 * delt; <br></td></tr
><tr
id=sl_svn1303_685

><td class="source">      sens2 += (11 * delt)&gt;&gt;1; <br></td></tr
><tr
id=sl_svn1303_686

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_687

><td class="source">  } <br></td></tr
><tr
id=sl_svn1303_688

><td class="source">  off  -= off2; <br></td></tr
><tr
id=sl_svn1303_689

><td class="source">  sens -= sens2;<br></td></tr
><tr
id=sl_svn1303_690

><td class="source">  pressure     = (( (ms561101ba_ctx.up.val * sens ) &gt;&gt; 21) - off) &gt;&gt; 15;<br></td></tr
><tr
id=sl_svn1303_691

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_692

><td class="source"><br></td></tr
><tr
id=sl_svn1303_693

><td class="source">void Baro_update() {                            // first UT conversion is started in init procedure<br></td></tr
><tr
id=sl_svn1303_694

><td class="source">  if (currentTime &lt; ms561101ba_ctx.deadline) return; <br></td></tr
><tr
id=sl_svn1303_695

><td class="source">  ms561101ba_ctx.deadline = currentTime+10000;  // UT and UP conversion take 8.5ms so we do next reading after 10ms <br></td></tr
><tr
id=sl_svn1303_696

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2;          // change the I2C clock rate to 400kHz, MS5611 is ok with this speed<br></td></tr
><tr
id=sl_svn1303_697

><td class="source">  if (ms561101ba_ctx.state == 0) {<br></td></tr
><tr
id=sl_svn1303_698

><td class="source">    i2c_MS561101BA_UT_Read(); <br></td></tr
><tr
id=sl_svn1303_699

><td class="source">    i2c_MS561101BA_UP_Start(); <br></td></tr
><tr
id=sl_svn1303_700

><td class="source">    BaroAlt = (1.0f - pow(pressure/101325.0f, 0.190295f)) * 4433000.0f; //centimeter  , moved here for less timecycle spike<br></td></tr
><tr
id=sl_svn1303_701

><td class="source">    ms561101ba_ctx.state = 1; <br></td></tr
><tr
id=sl_svn1303_702

><td class="source">  } else {<br></td></tr
><tr
id=sl_svn1303_703

><td class="source">    i2c_MS561101BA_UP_Read();<br></td></tr
><tr
id=sl_svn1303_704

><td class="source">    i2c_MS561101BA_UT_Start(); <br></td></tr
><tr
id=sl_svn1303_705

><td class="source">    i2c_MS561101BA_Calculate();<br></td></tr
><tr
id=sl_svn1303_706

><td class="source">//    BaroAlt = (1.0f - pow(pressure/101325.0f, 0.190295f)) * 4433000.0f; //centimeter<br></td></tr
><tr
id=sl_svn1303_707

><td class="source">    ms561101ba_ctx.state = 0; <br></td></tr
><tr
id=sl_svn1303_708

><td class="source">  }  <br></td></tr
><tr
id=sl_svn1303_709

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_710

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_711

><td class="source"><br></td></tr
><tr
id=sl_svn1303_712

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_713

><td class="source">// I2C Accelerometer MMA7455 <br></td></tr
><tr
id=sl_svn1303_714

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_715

><td class="source">#if defined(MMA7455)<br></td></tr
><tr
id=sl_svn1303_716

><td class="source">void ACC_init () {<br></td></tr
><tr
id=sl_svn1303_717

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_718

><td class="source">  i2c_writeReg(MMA7455_ADDRESS,0x16,0x21);<br></td></tr
><tr
id=sl_svn1303_719

><td class="source">  acc_1G = 64;<br></td></tr
><tr
id=sl_svn1303_720

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_721

><td class="source"><br></td></tr
><tr
id=sl_svn1303_722

><td class="source">void ACC_getADC () {<br></td></tr
><tr
id=sl_svn1303_723

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2;<br></td></tr
><tr
id=sl_svn1303_724

><td class="source">  i2c_getSixRawADC(MMA7455_ADDRESS,0x00);<br></td></tr
><tr
id=sl_svn1303_725

><td class="source"><br></td></tr
><tr
id=sl_svn1303_726

><td class="source">  ACC_ORIENTATION( ((int8_t(rawADC[1])&lt;&lt;8) | int8_t(rawADC[0])) ,<br></td></tr
><tr
id=sl_svn1303_727

><td class="source">                   ((int8_t(rawADC[3])&lt;&lt;8) | int8_t(rawADC[2])) ,<br></td></tr
><tr
id=sl_svn1303_728

><td class="source">                   ((int8_t(rawADC[5])&lt;&lt;8) | int8_t(rawADC[4])) );<br></td></tr
><tr
id=sl_svn1303_729

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_730

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_731

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_732

><td class="source"><br></td></tr
><tr
id=sl_svn1303_733

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_734

><td class="source">// I2C Accelerometer ADXL345 <br></td></tr
><tr
id=sl_svn1303_735

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_736

><td class="source">// I2C adress: 0x3A (8bit)    0x1D (7bit)<br></td></tr
><tr
id=sl_svn1303_737

><td class="source">// Resolution: 10bit (Full range - 14bit, but this is autoscaling 10bit ADC to the range +- 16g)<br></td></tr
><tr
id=sl_svn1303_738

><td class="source">// principle:<br></td></tr
><tr
id=sl_svn1303_739

><td class="source">//  1) CS PIN must be linked to VCC to select the I2C mode<br></td></tr
><tr
id=sl_svn1303_740

><td class="source">//  2) SD0 PIN must be linked to VCC to select the right I2C adress<br></td></tr
><tr
id=sl_svn1303_741

><td class="source">//  3) bit  b00000100 must be set on register 0x2D to read data (only once at the initialization)<br></td></tr
><tr
id=sl_svn1303_742

><td class="source">//  4) bits b00001011 must be set on register 0x31 to select the data format (only once at the initialization)<br></td></tr
><tr
id=sl_svn1303_743

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_744

><td class="source">#if defined(ADXL345)<br></td></tr
><tr
id=sl_svn1303_745

><td class="source">void ACC_init () {<br></td></tr
><tr
id=sl_svn1303_746

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_747

><td class="source">  i2c_writeReg(ADXL345_ADDRESS,0x2D,1&lt;&lt;3); //  register: Power CTRL  -- value: Set measure bit 3 on<br></td></tr
><tr
id=sl_svn1303_748

><td class="source">  i2c_writeReg(ADXL345_ADDRESS,0x31,0x0B); //  register: DATA_FORMAT -- value: Set bits 3(full range) and 1 0 on (+/- 16g-range)<br></td></tr
><tr
id=sl_svn1303_749

><td class="source">  i2c_writeReg(ADXL345_ADDRESS,0x2C,0x09); //  register: BW_RATE     -- value: rate=50hz, bw=20hz<br></td></tr
><tr
id=sl_svn1303_750

><td class="source">  acc_1G = 265;<br></td></tr
><tr
id=sl_svn1303_751

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_752

><td class="source"><br></td></tr
><tr
id=sl_svn1303_753

><td class="source">void ACC_getADC () {<br></td></tr
><tr
id=sl_svn1303_754

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz, ADXL435 is ok with this speed<br></td></tr
><tr
id=sl_svn1303_755

><td class="source">  i2c_getSixRawADC(ADXL345_ADDRESS,0x32);<br></td></tr
><tr
id=sl_svn1303_756

><td class="source"><br></td></tr
><tr
id=sl_svn1303_757

><td class="source">  ACC_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0]) ,<br></td></tr
><tr
id=sl_svn1303_758

><td class="source">                   ((rawADC[3]&lt;&lt;8) | rawADC[2]) ,<br></td></tr
><tr
id=sl_svn1303_759

><td class="source">                   ((rawADC[5]&lt;&lt;8) | rawADC[4]) );<br></td></tr
><tr
id=sl_svn1303_760

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_761

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_762

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_763

><td class="source"><br></td></tr
><tr
id=sl_svn1303_764

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_765

><td class="source">// I2C Accelerometer BMA180<br></td></tr
><tr
id=sl_svn1303_766

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_767

><td class="source">// I2C adress: 0x80 (8bit)    0x40 (7bit) (SDO connection to VCC) <br></td></tr
><tr
id=sl_svn1303_768

><td class="source">// I2C adress: 0x82 (8bit)    0x41 (7bit) (SDO connection to VDDIO)<br></td></tr
><tr
id=sl_svn1303_769

><td class="source">// Resolution: 14bit<br></td></tr
><tr
id=sl_svn1303_770

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_771

><td class="source">// Control registers:<br></td></tr
><tr
id=sl_svn1303_772

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_773

><td class="source">// 0x20    bw_tcs:      |                                           bw&lt;3:0&gt; |                        tcs&lt;3:0&gt; |<br></td></tr
><tr
id=sl_svn1303_774

><td class="source">//                      |                                             150Hz |                        xxxxxxxx |<br></td></tr
><tr
id=sl_svn1303_775

><td class="source">// 0x30    tco_z:       |                                                tco_z&lt;5:0&gt;    |     mode_config&lt;1:0&gt; |<br></td></tr
><tr
id=sl_svn1303_776

><td class="source">//                      |                                                xxxxxxxxxx    |                   00 |<br></td></tr
><tr
id=sl_svn1303_777

><td class="source">// 0x35    offset_lsb1: |          offset_x&lt;3:0&gt;              |                   range&lt;2:0&gt;       | smp_skip |<br></td></tr
><tr
id=sl_svn1303_778

><td class="source">//                      |          xxxxxxxxxxxxx              |                    8G:   101       | xxxxxxxx |<br></td></tr
><tr
id=sl_svn1303_779

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_780

><td class="source">#if defined(BMA180)<br></td></tr
><tr
id=sl_svn1303_781

><td class="source">void ACC_init () {<br></td></tr
><tr
id=sl_svn1303_782

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_783

><td class="source">  //default range 2G: 1G = 4096 unit.<br></td></tr
><tr
id=sl_svn1303_784

><td class="source">  i2c_writeReg(BMA180_ADDRESS,0x0D,1&lt;&lt;4); // register: ctrl_reg0  -- value: set bit ee_w to 1 to enable writing<br></td></tr
><tr
id=sl_svn1303_785

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_786

><td class="source">  uint8_t control = i2c_readReg(BMA180_ADDRESS, 0x20);<br></td></tr
><tr
id=sl_svn1303_787

><td class="source">  control = control &amp; 0x0F;        // save tcs register<br></td></tr
><tr
id=sl_svn1303_788

><td class="source">  control = control | (0x01 &lt;&lt; 4); // register: bw_tcs reg: bits 4-7 to set bw -- value: set low pass filter to 20Hz<br></td></tr
><tr
id=sl_svn1303_789

><td class="source">  i2c_writeReg(BMA180_ADDRESS, 0x20, control);<br></td></tr
><tr
id=sl_svn1303_790

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_791

><td class="source">  control = i2c_readReg(BMA180_ADDRESS, 0x30);<br></td></tr
><tr
id=sl_svn1303_792

><td class="source">  control = control &amp; 0xFC;        // save tco_z register<br></td></tr
><tr
id=sl_svn1303_793

><td class="source">  control = control | 0x00;        // set mode_config to 0<br></td></tr
><tr
id=sl_svn1303_794

><td class="source">  i2c_writeReg(BMA180_ADDRESS, 0x30, control);<br></td></tr
><tr
id=sl_svn1303_795

><td class="source">  delay(5); <br></td></tr
><tr
id=sl_svn1303_796

><td class="source">  control = i2c_readReg(BMA180_ADDRESS, 0x35);<br></td></tr
><tr
id=sl_svn1303_797

><td class="source">  control = control &amp; 0xF1;        // save offset_x and smp_skip register<br></td></tr
><tr
id=sl_svn1303_798

><td class="source">  control = control | (0x05 &lt;&lt; 1); // set range to 8G<br></td></tr
><tr
id=sl_svn1303_799

><td class="source">  i2c_writeReg(BMA180_ADDRESS, 0x35, control);<br></td></tr
><tr
id=sl_svn1303_800

><td class="source">  delay(5); <br></td></tr
><tr
id=sl_svn1303_801

><td class="source">  acc_1G = 255;<br></td></tr
><tr
id=sl_svn1303_802

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_803

><td class="source"><br></td></tr
><tr
id=sl_svn1303_804

><td class="source">void ACC_getADC () {<br></td></tr
><tr
id=sl_svn1303_805

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2;  // Optional line.  Sensor is good for it in the spec.<br></td></tr
><tr
id=sl_svn1303_806

><td class="source">  i2c_getSixRawADC(BMA180_ADDRESS,0x02);<br></td></tr
><tr
id=sl_svn1303_807

><td class="source">  //usefull info is on the 14 bits  [2-15] bits  /4 =&gt; [0-13] bits  /4 =&gt; 12 bit resolution<br></td></tr
><tr
id=sl_svn1303_808

><td class="source">  ACC_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0])/16 ,<br></td></tr
><tr
id=sl_svn1303_809

><td class="source">                   ((rawADC[3]&lt;&lt;8) | rawADC[2])/16 ,<br></td></tr
><tr
id=sl_svn1303_810

><td class="source">                   ((rawADC[5]&lt;&lt;8) | rawADC[4])/16 );<br></td></tr
><tr
id=sl_svn1303_811

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_812

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_813

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_814

><td class="source"><br></td></tr
><tr
id=sl_svn1303_815

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_816

><td class="source">// I2C Accelerometer BMA020<br></td></tr
><tr
id=sl_svn1303_817

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_818

><td class="source">// I2C adress: 0x70 (8bit)<br></td></tr
><tr
id=sl_svn1303_819

><td class="source">// Resolution: 10bit<br></td></tr
><tr
id=sl_svn1303_820

><td class="source">// Control registers:<br></td></tr
><tr
id=sl_svn1303_821

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_822

><td class="source">// Datasheet: After power on reset or soft reset it is recommended to set the SPI4-bit to the correct value.<br></td></tr
><tr
id=sl_svn1303_823

><td class="source">//            0x80 = SPI four-wire = Default setting<br></td></tr
><tr
id=sl_svn1303_824

><td class="source">// | 0x15: | SPI4 | enable_adv_INT | new_data_INT | latch_INT | shadow_dis | wake_up_pause&lt;1:0&gt; | wake_up |<br></td></tr
><tr
id=sl_svn1303_825

><td class="source">// |       |    1 |              0 |            0 |         0 |          0 |                 00 |       0 |<br></td></tr
><tr
id=sl_svn1303_826

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_827

><td class="source">// | 0x14: |                       reserved &lt;2:0&gt; |            range &lt;1:0&gt; |               bandwith &lt;2:0&gt; |<br></td></tr
><tr
id=sl_svn1303_828

><td class="source">// |       |                      !!Calibration!! |                     2g |                         25Hz |<br></td></tr
><tr
id=sl_svn1303_829

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_830

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_831

><td class="source">#if defined(BMA020)<br></td></tr
><tr
id=sl_svn1303_832

><td class="source">void ACC_init(){<br></td></tr
><tr
id=sl_svn1303_833

><td class="source">  i2c_writeReg(0x38,0x15,0x80);    // set SPI4 bit<br></td></tr
><tr
id=sl_svn1303_834

><td class="source">  uint8_t control = i2c_readReg(0x70, 0x14);<br></td></tr
><tr
id=sl_svn1303_835

><td class="source">  control = control &amp; 0xE0;        // save bits 7,6,5<br></td></tr
><tr
id=sl_svn1303_836

><td class="source">  control = control | (0x02 &lt;&lt; 3); // Range 8G (10)<br></td></tr
><tr
id=sl_svn1303_837

><td class="source">  control = control | 0x00;        // Bandwidth 25 Hz 000<br></td></tr
><tr
id=sl_svn1303_838

><td class="source">  i2c_writeReg(0x38,0x14,control); <br></td></tr
><tr
id=sl_svn1303_839

><td class="source">  acc_1G = 63;<br></td></tr
><tr
id=sl_svn1303_840

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_841

><td class="source"><br></td></tr
><tr
id=sl_svn1303_842

><td class="source">void ACC_getADC(){<br></td></tr
><tr
id=sl_svn1303_843

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2;<br></td></tr
><tr
id=sl_svn1303_844

><td class="source">  i2c_getSixRawADC(0x38,0x02);<br></td></tr
><tr
id=sl_svn1303_845

><td class="source">  ACC_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0])/64 ,<br></td></tr
><tr
id=sl_svn1303_846

><td class="source">                   ((rawADC[3]&lt;&lt;8) | rawADC[2])/64 ,<br></td></tr
><tr
id=sl_svn1303_847

><td class="source">                   ((rawADC[5]&lt;&lt;8) | rawADC[4])/64 );<br></td></tr
><tr
id=sl_svn1303_848

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_849

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_850

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_851

><td class="source"><br></td></tr
><tr
id=sl_svn1303_852

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_853

><td class="source">// standalone I2C Nunchuk<br></td></tr
><tr
id=sl_svn1303_854

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_855

><td class="source">#if defined(NUNCHACK)<br></td></tr
><tr
id=sl_svn1303_856

><td class="source">#define NUNCHACK_ADDRESS 0x52<br></td></tr
><tr
id=sl_svn1303_857

><td class="source"><br></td></tr
><tr
id=sl_svn1303_858

><td class="source">void ACC_init() {<br></td></tr
><tr
id=sl_svn1303_859

><td class="source">  i2c_writeReg(NUNCHACK_ADDRESS ,0xF0 ,0x55 );<br></td></tr
><tr
id=sl_svn1303_860

><td class="source">  i2c_writeReg(NUNCHACK_ADDRESS ,0xFB ,0x00 );<br></td></tr
><tr
id=sl_svn1303_861

><td class="source">  delay(250);<br></td></tr
><tr
id=sl_svn1303_862

><td class="source">  acc_1G = 200;<br></td></tr
><tr
id=sl_svn1303_863

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_864

><td class="source"><br></td></tr
><tr
id=sl_svn1303_865

><td class="source">void ACC_getADC() {<br></td></tr
><tr
id=sl_svn1303_866

><td class="source">  TWBR = ((F_CPU / I2C_SPEED) - 16) / 2; // change the I2C clock rate. !! you must check if the nunchuk is ok with this freq<br></td></tr
><tr
id=sl_svn1303_867

><td class="source">  i2c_getSixRawADC(NUNCHACK_ADDRESS,0x00);<br></td></tr
><tr
id=sl_svn1303_868

><td class="source"><br></td></tr
><tr
id=sl_svn1303_869

><td class="source">  ACC_ORIENTATION(  ( (rawADC[3]&lt;&lt;2)        + ((rawADC[5]&gt;&gt;4)&amp;0x2) ) ,<br></td></tr
><tr
id=sl_svn1303_870

><td class="source">                  - ( (rawADC[2]&lt;&lt;2)        + ((rawADC[5]&gt;&gt;3)&amp;0x2) ) ,<br></td></tr
><tr
id=sl_svn1303_871

><td class="source">                    ( ((rawADC[4]&amp;0xFE)&lt;&lt;2) + ((rawADC[5]&gt;&gt;5)&amp;0x6) ));<br></td></tr
><tr
id=sl_svn1303_872

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_873

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_874

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_875

><td class="source"><br></td></tr
><tr
id=sl_svn1303_876

><td class="source">// ************************************************************************<br></td></tr
><tr
id=sl_svn1303_877

><td class="source">// LIS3LV02 I2C Accelerometer<br></td></tr
><tr
id=sl_svn1303_878

><td class="source">// ************************************************************************<br></td></tr
><tr
id=sl_svn1303_879

><td class="source">#if defined(LIS3LV02)<br></td></tr
><tr
id=sl_svn1303_880

><td class="source">#define LIS3A  0x1D<br></td></tr
><tr
id=sl_svn1303_881

><td class="source"><br></td></tr
><tr
id=sl_svn1303_882

><td class="source">void ACC_init(){<br></td></tr
><tr
id=sl_svn1303_883

><td class="source">  i2c_writeReg(LIS3A ,0x20 ,0xD7 ); // CTRL_REG1   1101 0111 Pwr on, 160Hz <br></td></tr
><tr
id=sl_svn1303_884

><td class="source">  i2c_writeReg(LIS3A ,0x21 ,0x50 ); // CTRL_REG2   0100 0000 Littl endian, 12 Bit, Boot<br></td></tr
><tr
id=sl_svn1303_885

><td class="source">  acc_1G = 256;<br></td></tr
><tr
id=sl_svn1303_886

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_887

><td class="source"><br></td></tr
><tr
id=sl_svn1303_888

><td class="source">void ACC_getADC(){<br></td></tr
><tr
id=sl_svn1303_889

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz<br></td></tr
><tr
id=sl_svn1303_890

><td class="source">  i2c_getSixRawADC(LIS3A,0x28+0x80);<br></td></tr
><tr
id=sl_svn1303_891

><td class="source">  ACC_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0])/4 ,<br></td></tr
><tr
id=sl_svn1303_892

><td class="source">                   ((rawADC[3]&lt;&lt;8) | rawADC[2])/4 ,<br></td></tr
><tr
id=sl_svn1303_893

><td class="source">                   ((rawADC[5]&lt;&lt;8) | rawADC[4])/4);<br></td></tr
><tr
id=sl_svn1303_894

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_895

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_896

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_897

><td class="source"><br></td></tr
><tr
id=sl_svn1303_898

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_899

><td class="source">// I2C Accelerometer LSM303DLx<br></td></tr
><tr
id=sl_svn1303_900

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_901

><td class="source">#if defined(LSM303DLx_ACC)<br></td></tr
><tr
id=sl_svn1303_902

><td class="source">void ACC_init () {<br></td></tr
><tr
id=sl_svn1303_903

><td class="source">  delay(10);<br></td></tr
><tr
id=sl_svn1303_904

><td class="source">  i2c_writeReg(0x18,0x20,0x27);<br></td></tr
><tr
id=sl_svn1303_905

><td class="source">  i2c_writeReg(0x18,0x23,0x30);<br></td></tr
><tr
id=sl_svn1303_906

><td class="source">  i2c_writeReg(0x18,0x21,0x00);<br></td></tr
><tr
id=sl_svn1303_907

><td class="source"><br></td></tr
><tr
id=sl_svn1303_908

><td class="source">  acc_1G = 256;<br></td></tr
><tr
id=sl_svn1303_909

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_910

><td class="source"><br></td></tr
><tr
id=sl_svn1303_911

><td class="source">  void ACC_getADC () {<br></td></tr
><tr
id=sl_svn1303_912

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2;<br></td></tr
><tr
id=sl_svn1303_913

><td class="source">  i2c_getSixRawADC(0x18,0xA8);<br></td></tr
><tr
id=sl_svn1303_914

><td class="source"><br></td></tr
><tr
id=sl_svn1303_915

><td class="source">  ACC_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0])/16 ,<br></td></tr
><tr
id=sl_svn1303_916

><td class="source">                   ((rawADC[3]&lt;&lt;8) | rawADC[2])/16 ,<br></td></tr
><tr
id=sl_svn1303_917

><td class="source">                   ((rawADC[5]&lt;&lt;8) | rawADC[4])/16 );<br></td></tr
><tr
id=sl_svn1303_918

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_919

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_920

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_921

><td class="source"><br></td></tr
><tr
id=sl_svn1303_922

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_923

><td class="source">// ADC ACC<br></td></tr
><tr
id=sl_svn1303_924

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_925

><td class="source">#if defined(ADCACC)<br></td></tr
><tr
id=sl_svn1303_926

><td class="source">void ACC_init(){<br></td></tr
><tr
id=sl_svn1303_927

><td class="source">  pinMode(A1,INPUT);<br></td></tr
><tr
id=sl_svn1303_928

><td class="source">  pinMode(A2,INPUT);<br></td></tr
><tr
id=sl_svn1303_929

><td class="source">  pinMode(A3,INPUT);<br></td></tr
><tr
id=sl_svn1303_930

><td class="source">  acc_1G = 75;<br></td></tr
><tr
id=sl_svn1303_931

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_932

><td class="source"><br></td></tr
><tr
id=sl_svn1303_933

><td class="source">void ACC_getADC() {<br></td></tr
><tr
id=sl_svn1303_934

><td class="source">  ACC_ORIENTATION(  analogRead(A1) ,<br></td></tr
><tr
id=sl_svn1303_935

><td class="source">                    analogRead(A2) ,<br></td></tr
><tr
id=sl_svn1303_936

><td class="source">                    analogRead(A3) );<br></td></tr
><tr
id=sl_svn1303_937

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_938

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_939

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_940

><td class="source"><br></td></tr
><tr
id=sl_svn1303_941

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_942

><td class="source">// I2C Gyroscope L3G4200D <br></td></tr
><tr
id=sl_svn1303_943

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_944

><td class="source">#if defined(L3G4200D)<br></td></tr
><tr
id=sl_svn1303_945

><td class="source">#define L3G4200D_ADDRESS 0x69<br></td></tr
><tr
id=sl_svn1303_946

><td class="source">void Gyro_init() {<br></td></tr
><tr
id=sl_svn1303_947

><td class="source">  delay(100);<br></td></tr
><tr
id=sl_svn1303_948

><td class="source">  i2c_writeReg(L3G4200D_ADDRESS ,0x20 ,0x8F ); // CTRL_REG1   400Hz ODR, 20hz filter, run!<br></td></tr
><tr
id=sl_svn1303_949

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_950

><td class="source">  i2c_writeReg(L3G4200D_ADDRESS ,0x24 ,0x02 ); // CTRL_REG5   low pass filter enable<br></td></tr
><tr
id=sl_svn1303_951

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_952

><td class="source"><br></td></tr
><tr
id=sl_svn1303_953

><td class="source">void Gyro_getADC () {<br></td></tr
><tr
id=sl_svn1303_954

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz<br></td></tr
><tr
id=sl_svn1303_955

><td class="source">  i2c_getSixRawADC(L3G4200D_ADDRESS,0x80|0x28);<br></td></tr
><tr
id=sl_svn1303_956

><td class="source"><br></td></tr
><tr
id=sl_svn1303_957

><td class="source">  GYRO_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0])/20  ,<br></td></tr
><tr
id=sl_svn1303_958

><td class="source">                    ((rawADC[3]&lt;&lt;8) | rawADC[2])/20  ,<br></td></tr
><tr
id=sl_svn1303_959

><td class="source">                    ((rawADC[5]&lt;&lt;8) | rawADC[4])/20  );<br></td></tr
><tr
id=sl_svn1303_960

><td class="source">  GYRO_Common();<br></td></tr
><tr
id=sl_svn1303_961

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_962

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_963

><td class="source"><br></td></tr
><tr
id=sl_svn1303_964

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_965

><td class="source">// I2C Gyroscope ITG3200 <br></td></tr
><tr
id=sl_svn1303_966

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_967

><td class="source">// I2C adress: 0xD2 (8bit)   0x69 (7bit)<br></td></tr
><tr
id=sl_svn1303_968

><td class="source">// I2C adress: 0xD0 (8bit)   0x68 (7bit)<br></td></tr
><tr
id=sl_svn1303_969

><td class="source">// principle:<br></td></tr
><tr
id=sl_svn1303_970

><td class="source">// 1) VIO is connected to VDD<br></td></tr
><tr
id=sl_svn1303_971

><td class="source">// 2) I2C adress is set to 0x69 (AD0 PIN connected to VDD)<br></td></tr
><tr
id=sl_svn1303_972

><td class="source">// or 2) I2C adress is set to 0x68 (AD0 PIN connected to GND)<br></td></tr
><tr
id=sl_svn1303_973

><td class="source">// 3) sample rate = 1000Hz ( 1kHz/(div+1) )<br></td></tr
><tr
id=sl_svn1303_974

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_975

><td class="source">#if defined(ITG3200)<br></td></tr
><tr
id=sl_svn1303_976

><td class="source">void Gyro_init() {<br></td></tr
><tr
id=sl_svn1303_977

><td class="source">  delay(100);<br></td></tr
><tr
id=sl_svn1303_978

><td class="source">  i2c_writeReg(ITG3200_ADDRESS, 0x3E, 0x80); //register: Power Management  --  value: reset device<br></td></tr
><tr
id=sl_svn1303_979

><td class="source">//  delay(5);<br></td></tr
><tr
id=sl_svn1303_980

><td class="source">//  i2c_writeReg(ITG3200_ADDRESS, 0x15, ITG3200_SMPLRT_DIV); //register: Sample Rate Divider  -- default value = 0: OK<br></td></tr
><tr
id=sl_svn1303_981

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_982

><td class="source">  i2c_writeReg(ITG3200_ADDRESS, 0x16, 0x18 + ITG3200_DLPF_CFG); //register: DLPF_CFG - low pass filter configuration<br></td></tr
><tr
id=sl_svn1303_983

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_984

><td class="source">  i2c_writeReg(ITG3200_ADDRESS, 0x3E, 0x03); //register: Power Management  --  value: PLL with Z Gyro reference<br></td></tr
><tr
id=sl_svn1303_985

><td class="source">  delay(100);<br></td></tr
><tr
id=sl_svn1303_986

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_987

><td class="source"><br></td></tr
><tr
id=sl_svn1303_988

><td class="source">void Gyro_getADC () {<br></td></tr
><tr
id=sl_svn1303_989

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz<br></td></tr
><tr
id=sl_svn1303_990

><td class="source">  i2c_getSixRawADC(ITG3200_ADDRESS,0X1D);<br></td></tr
><tr
id=sl_svn1303_991

><td class="source">  GYRO_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1])/4 , // range: +/- 8192; +/- 2000 deg/sec<br></td></tr
><tr
id=sl_svn1303_992

><td class="source">                    ((rawADC[2]&lt;&lt;8) | rawADC[3])/4 ,<br></td></tr
><tr
id=sl_svn1303_993

><td class="source">                    ((rawADC[4]&lt;&lt;8) | rawADC[5])/4 );<br></td></tr
><tr
id=sl_svn1303_994

><td class="source">  GYRO_Common();<br></td></tr
><tr
id=sl_svn1303_995

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_996

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_997

><td class="source"><br></td></tr
><tr
id=sl_svn1303_998

><td class="source"><br></td></tr
><tr
id=sl_svn1303_999

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1000

><td class="source">// I2C Compass common function<br></td></tr
><tr
id=sl_svn1303_1001

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1002

><td class="source">#if MAG<br></td></tr
><tr
id=sl_svn1303_1003

><td class="source">static float   magCal[3] = {1.0,1.0,1.0};  // gain for each axis, populated at sensor init<br></td></tr
><tr
id=sl_svn1303_1004

><td class="source">static uint8_t magInit = 0;<br></td></tr
><tr
id=sl_svn1303_1005

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1006

><td class="source">void Mag_getADC() {<br></td></tr
><tr
id=sl_svn1303_1007

><td class="source">  static uint32_t t,tCal = 0;<br></td></tr
><tr
id=sl_svn1303_1008

><td class="source">  static int16_t magZeroTempMin[3];<br></td></tr
><tr
id=sl_svn1303_1009

><td class="source">  static int16_t magZeroTempMax[3];<br></td></tr
><tr
id=sl_svn1303_1010

><td class="source">  uint8_t axis;<br></td></tr
><tr
id=sl_svn1303_1011

><td class="source">  if ( currentTime &lt; t ) return; //each read is spaced by 100ms<br></td></tr
><tr
id=sl_svn1303_1012

><td class="source">  t = currentTime + 100000;<br></td></tr
><tr
id=sl_svn1303_1013

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz<br></td></tr
><tr
id=sl_svn1303_1014

><td class="source">  Device_Mag_getADC();<br></td></tr
><tr
id=sl_svn1303_1015

><td class="source">  magADC[ROLL]  = magADC[ROLL]  * magCal[ROLL];<br></td></tr
><tr
id=sl_svn1303_1016

><td class="source">  magADC[PITCH] = magADC[PITCH] * magCal[PITCH];<br></td></tr
><tr
id=sl_svn1303_1017

><td class="source">  magADC[YAW]   = magADC[YAW]   * magCal[YAW];<br></td></tr
><tr
id=sl_svn1303_1018

><td class="source">  if (f.CALIBRATE_MAG) {<br></td></tr
><tr
id=sl_svn1303_1019

><td class="source">    tCal = t;<br></td></tr
><tr
id=sl_svn1303_1020

><td class="source">    for(axis=0;axis&lt;3;axis++) {<br></td></tr
><tr
id=sl_svn1303_1021

><td class="source">      global_conf.magZero[axis] = 0;<br></td></tr
><tr
id=sl_svn1303_1022

><td class="source">      magZeroTempMin[axis] = magADC[axis];<br></td></tr
><tr
id=sl_svn1303_1023

><td class="source">      magZeroTempMax[axis] = magADC[axis];<br></td></tr
><tr
id=sl_svn1303_1024

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1025

><td class="source">    f.CALIBRATE_MAG = 0;<br></td></tr
><tr
id=sl_svn1303_1026

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1027

><td class="source">  if (magInit) { // we apply offset only once mag calibration is done<br></td></tr
><tr
id=sl_svn1303_1028

><td class="source">    magADC[ROLL]  -= global_conf.magZero[ROLL];<br></td></tr
><tr
id=sl_svn1303_1029

><td class="source">    magADC[PITCH] -= global_conf.magZero[PITCH];<br></td></tr
><tr
id=sl_svn1303_1030

><td class="source">    magADC[YAW]   -= global_conf.magZero[YAW];<br></td></tr
><tr
id=sl_svn1303_1031

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1032

><td class="source"> <br></td></tr
><tr
id=sl_svn1303_1033

><td class="source">  if (tCal != 0) {<br></td></tr
><tr
id=sl_svn1303_1034

><td class="source">    if ((t - tCal) &lt; 30000000) { // 30s: you have 30s to turn the multi in all directions<br></td></tr
><tr
id=sl_svn1303_1035

><td class="source">      LEDPIN_TOGGLE;<br></td></tr
><tr
id=sl_svn1303_1036

><td class="source">      for(axis=0;axis&lt;3;axis++) {<br></td></tr
><tr
id=sl_svn1303_1037

><td class="source">        if (magADC[axis] &lt; magZeroTempMin[axis]) magZeroTempMin[axis] = magADC[axis];<br></td></tr
><tr
id=sl_svn1303_1038

><td class="source">        if (magADC[axis] &gt; magZeroTempMax[axis]) magZeroTempMax[axis] = magADC[axis];<br></td></tr
><tr
id=sl_svn1303_1039

><td class="source">      }<br></td></tr
><tr
id=sl_svn1303_1040

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn1303_1041

><td class="source">      tCal = 0;<br></td></tr
><tr
id=sl_svn1303_1042

><td class="source">      for(axis=0;axis&lt;3;axis++)<br></td></tr
><tr
id=sl_svn1303_1043

><td class="source">        global_conf.magZero[axis] = (magZeroTempMin[axis] + magZeroTempMax[axis])/2;<br></td></tr
><tr
id=sl_svn1303_1044

><td class="source">      writeGlobalSet(1);<br></td></tr
><tr
id=sl_svn1303_1045

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1046

><td class="source">  } else {<br></td></tr
><tr
id=sl_svn1303_1047

><td class="source">    #if defined(SENSORS_TILT_45DEG_LEFT)<br></td></tr
><tr
id=sl_svn1303_1048

><td class="source">      int16_t temp = ((magADC[PITCH] - magADC[ROLL] )*7)/10;<br></td></tr
><tr
id=sl_svn1303_1049

><td class="source">      magADC[ROLL] = ((magADC[ROLL]  + magADC[PITCH])*7)/10;<br></td></tr
><tr
id=sl_svn1303_1050

><td class="source">      magADC[PITCH] = temp;<br></td></tr
><tr
id=sl_svn1303_1051

><td class="source">    #endif<br></td></tr
><tr
id=sl_svn1303_1052

><td class="source">    #if defined(SENSORS_TILT_45DEG_RIGHT)<br></td></tr
><tr
id=sl_svn1303_1053

><td class="source">      int16_t temp = ((magADC[PITCH] + magADC[ROLL] )*7)/10;<br></td></tr
><tr
id=sl_svn1303_1054

><td class="source">      magADC[ROLL] = ((magADC[ROLL]  - magADC[PITCH])*7)/10;<br></td></tr
><tr
id=sl_svn1303_1055

><td class="source">      magADC[PITCH] = temp;<br></td></tr
><tr
id=sl_svn1303_1056

><td class="source">    #endif<br></td></tr
><tr
id=sl_svn1303_1057

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1058

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1059

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1060

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1061

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1062

><td class="source">// I2C Compass MAG3110<br></td></tr
><tr
id=sl_svn1303_1063

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1064

><td class="source">// I2C adress: 0x0E (7bit)<br></td></tr
><tr
id=sl_svn1303_1065

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1066

><td class="source">#if defined(MAG3110)<br></td></tr
><tr
id=sl_svn1303_1067

><td class="source">  #define MAG_ADDRESS 0x0E<br></td></tr
><tr
id=sl_svn1303_1068

><td class="source">  #define MAG_DATA_REGISTER 0x01<br></td></tr
><tr
id=sl_svn1303_1069

><td class="source">  #define MAG_CTRL_REG1 0x10<br></td></tr
><tr
id=sl_svn1303_1070

><td class="source">  #define MAG_CTRL_REG2 0x11<br></td></tr
><tr
id=sl_svn1303_1071

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1072

><td class="source">  void Mag_init() {<br></td></tr
><tr
id=sl_svn1303_1073

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1074

><td class="source">    i2c_writeReg(MAG_ADDRESS,MAG_CTRL_REG2,0x80);  //Automatic Magnetic Sensor Reset<br></td></tr
><tr
id=sl_svn1303_1075

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1076

><td class="source">    i2c_writeReg(MAG_ADDRESS,MAG_CTRL_REG1,0x11); // DR = 20Hz ; OS ratio = 64 ; mode = Active<br></td></tr
><tr
id=sl_svn1303_1077

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1078

><td class="source">    magInit = 1;<br></td></tr
><tr
id=sl_svn1303_1079

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1080

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1081

><td class="source">  #if not defined(MPU6050_I2C_AUX_MASTER)<br></td></tr
><tr
id=sl_svn1303_1082

><td class="source">    void Device_Mag_getADC() {<br></td></tr
><tr
id=sl_svn1303_1083

><td class="source">      i2c_getSixRawADC(MAG_ADDRESS,MAG_DATA_REGISTER);<br></td></tr
><tr
id=sl_svn1303_1084

><td class="source">      MAG_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1]) ,          <br></td></tr
><tr
id=sl_svn1303_1085

><td class="source">                       ((rawADC[2]&lt;&lt;8) | rawADC[3]) ,     <br></td></tr
><tr
id=sl_svn1303_1086

><td class="source">                       ((rawADC[4]&lt;&lt;8) | rawADC[5]) );<br></td></tr
><tr
id=sl_svn1303_1087

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1088

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1089

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1090

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1091

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1092

><td class="source">// I2C Compass HMC5843 &amp; HMC5883<br></td></tr
><tr
id=sl_svn1303_1093

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1094

><td class="source">// I2C adress: 0x3C (8bit)   0x1E (7bit)<br></td></tr
><tr
id=sl_svn1303_1095

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1096

><td class="source">#if defined(HMC5843) || defined(HMC5883)<br></td></tr
><tr
id=sl_svn1303_1097

><td class="source">  #define MAG_ADDRESS 0x1E<br></td></tr
><tr
id=sl_svn1303_1098

><td class="source">  #define MAG_DATA_REGISTER 0x03<br></td></tr
><tr
id=sl_svn1303_1099

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1100

><td class="source">  void Mag_init() { <br></td></tr
><tr
id=sl_svn1303_1101

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1102

><td class="source">    // force positiveBias<br></td></tr
><tr
id=sl_svn1303_1103

><td class="source">    i2c_writeReg(MAG_ADDRESS ,0x00 ,0x71 ); //Configuration Register A  -- 0 11 100 01  num samples: 8 ; output rate: 15Hz ; positive bias<br></td></tr
><tr
id=sl_svn1303_1104

><td class="source">    delay(50);<br></td></tr
><tr
id=sl_svn1303_1105

><td class="source">    // set gains for calibration<br></td></tr
><tr
id=sl_svn1303_1106

><td class="source">    i2c_writeReg(MAG_ADDRESS ,0x01 ,0x60 ); //Configuration Register B  -- 011 00000    configuration gain 2.5Ga<br></td></tr
><tr
id=sl_svn1303_1107

><td class="source">    i2c_writeReg(MAG_ADDRESS ,0x02 ,0x01 ); //Mode register             -- 000000 01    single Conversion Mode<br></td></tr
><tr
id=sl_svn1303_1108

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1109

><td class="source">    // read values from the compass -  self test operation<br></td></tr
><tr
id=sl_svn1303_1110

><td class="source">    // by placing the mode register into single-measurement mode (0x01), two data acquisition cycles will be made on each magnetic vector.<br></td></tr
><tr
id=sl_svn1303_1111

><td class="source">    // The first acquisition values will be subtracted from the second acquisition, and the net measurement will be placed into the data output registers<br></td></tr
><tr
id=sl_svn1303_1112

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1113

><td class="source">      getADC();<br></td></tr
><tr
id=sl_svn1303_1114

><td class="source">    delay(10);<br></td></tr
><tr
id=sl_svn1303_1115

><td class="source">    #if defined(HMC5883)<br></td></tr
><tr
id=sl_svn1303_1116

><td class="source">      magCal[ROLL]  =  1160.0 / abs(magADC[ROLL]);<br></td></tr
><tr
id=sl_svn1303_1117

><td class="source">      magCal[PITCH] =  1160.0 / abs(magADC[PITCH]);<br></td></tr
><tr
id=sl_svn1303_1118

><td class="source">      magCal[YAW]   =  1080.0 / abs(magADC[YAW]);<br></td></tr
><tr
id=sl_svn1303_1119

><td class="source">    #else<br></td></tr
><tr
id=sl_svn1303_1120

><td class="source">      magCal[ROLL]  =  1000.0 / abs(magADC[ROLL]);<br></td></tr
><tr
id=sl_svn1303_1121

><td class="source">      magCal[PITCH] =  1000.0 / abs(magADC[PITCH]);<br></td></tr
><tr
id=sl_svn1303_1122

><td class="source">      magCal[YAW]   =  1000.0 / abs(magADC[YAW]);<br></td></tr
><tr
id=sl_svn1303_1123

><td class="source">    #endif<br></td></tr
><tr
id=sl_svn1303_1124

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1125

><td class="source">    // leave test mode<br></td></tr
><tr
id=sl_svn1303_1126

><td class="source">    i2c_writeReg(MAG_ADDRESS ,0x00 ,0x70 ); //Configuration Register A  -- 0 11 100 00  num samples: 8 ; output rate: 15Hz ; normal measurement mode<br></td></tr
><tr
id=sl_svn1303_1127

><td class="source">    i2c_writeReg(MAG_ADDRESS ,0x01 ,0x20 ); //Configuration Register B  -- 001 00000    configuration gain 1.3Ga<br></td></tr
><tr
id=sl_svn1303_1128

><td class="source">    i2c_writeReg(MAG_ADDRESS ,0x02 ,0x00 ); //Mode register             -- 000000 00    continuous Conversion Mode<br></td></tr
><tr
id=sl_svn1303_1129

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1130

><td class="source">    magInit = 1;<br></td></tr
><tr
id=sl_svn1303_1131

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1132

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1133

><td class="source">void getADC() {<br></td></tr
><tr
id=sl_svn1303_1134

><td class="source">  i2c_getSixRawADC(MAG_ADDRESS,MAG_DATA_REGISTER);<br></td></tr
><tr
id=sl_svn1303_1135

><td class="source">  #if defined(HMC5843)<br></td></tr
><tr
id=sl_svn1303_1136

><td class="source">    MAG_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1]) ,<br></td></tr
><tr
id=sl_svn1303_1137

><td class="source">                     ((rawADC[2]&lt;&lt;8) | rawADC[3]) ,<br></td></tr
><tr
id=sl_svn1303_1138

><td class="source">                     ((rawADC[4]&lt;&lt;8) | rawADC[5]) );<br></td></tr
><tr
id=sl_svn1303_1139

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1140

><td class="source">  #if defined (HMC5883)  <br></td></tr
><tr
id=sl_svn1303_1141

><td class="source">    MAG_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1]) ,<br></td></tr
><tr
id=sl_svn1303_1142

><td class="source">                     ((rawADC[4]&lt;&lt;8) | rawADC[5]) ,<br></td></tr
><tr
id=sl_svn1303_1143

><td class="source">                     ((rawADC[2]&lt;&lt;8) | rawADC[3]) );<br></td></tr
><tr
id=sl_svn1303_1144

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1145

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1146

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1147

><td class="source">#if not defined(MPU6050_I2C_AUX_MASTER)<br></td></tr
><tr
id=sl_svn1303_1148

><td class="source">void Device_Mag_getADC() {<br></td></tr
><tr
id=sl_svn1303_1149

><td class="source">  getADC();<br></td></tr
><tr
id=sl_svn1303_1150

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1151

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1152

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1153

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1154

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1155

><td class="source">// I2C Compass AK8975<br></td></tr
><tr
id=sl_svn1303_1156

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1157

><td class="source">// I2C adress: 0x0C (7bit)<br></td></tr
><tr
id=sl_svn1303_1158

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1159

><td class="source">#if defined(AK8975)<br></td></tr
><tr
id=sl_svn1303_1160

><td class="source">  #define MAG_ADDRESS 0x0C<br></td></tr
><tr
id=sl_svn1303_1161

><td class="source">  #define MAG_DATA_REGISTER 0x03<br></td></tr
><tr
id=sl_svn1303_1162

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1163

><td class="source">  void Mag_init() {<br></td></tr
><tr
id=sl_svn1303_1164

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1165

><td class="source">    i2c_writeReg(MAG_ADDRESS,0x0a,0x01);  //Start the first conversion<br></td></tr
><tr
id=sl_svn1303_1166

><td class="source">    delay(100);<br></td></tr
><tr
id=sl_svn1303_1167

><td class="source">    magInit = 1;<br></td></tr
><tr
id=sl_svn1303_1168

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1169

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1170

><td class="source">  void Device_Mag_getADC() {<br></td></tr
><tr
id=sl_svn1303_1171

><td class="source">    i2c_getSixRawADC(MAG_ADDRESS,MAG_DATA_REGISTER);<br></td></tr
><tr
id=sl_svn1303_1172

><td class="source">    MAG_ORIENTATION( ((rawADC[1]&lt;&lt;8) | rawADC[0]) ,          <br></td></tr
><tr
id=sl_svn1303_1173

><td class="source">                     ((rawADC[3]&lt;&lt;8) | rawADC[2]) ,     <br></td></tr
><tr
id=sl_svn1303_1174

><td class="source">                     ((rawADC[5]&lt;&lt;8) | rawADC[4]) );<br></td></tr
><tr
id=sl_svn1303_1175

><td class="source">    //Start another meassurement<br></td></tr
><tr
id=sl_svn1303_1176

><td class="source">    i2c_writeReg(MAG_ADDRESS,0x0a,0x01);<br></td></tr
><tr
id=sl_svn1303_1177

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1178

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1179

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1180

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1181

><td class="source">// I2C Gyroscope and Accelerometer MPU6050<br></td></tr
><tr
id=sl_svn1303_1182

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1183

><td class="source">#if defined(MPU6050)<br></td></tr
><tr
id=sl_svn1303_1184

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1185

><td class="source">void Gyro_init() {<br></td></tr
><tr
id=sl_svn1303_1186

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz<br></td></tr
><tr
id=sl_svn1303_1187

><td class="source">  i2c_writeReg(MPU6050_ADDRESS, 0x6B, 0x80);             //PWR_MGMT_1    -- DEVICE_RESET 1<br></td></tr
><tr
id=sl_svn1303_1188

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_1189

><td class="source">  i2c_writeReg(MPU6050_ADDRESS, 0x6B, 0x03);             //PWR_MGMT_1    -- SLEEP 0; CYCLE 0; TEMP_DIS 0; CLKSEL 3 (PLL with Z Gyro reference)<br></td></tr
><tr
id=sl_svn1303_1190

><td class="source">  i2c_writeReg(MPU6050_ADDRESS, 0x1A, MPU6050_DLPF_CFG); //CONFIG        -- EXT_SYNC_SET 0 (disable input pin for data sync) ; default DLPF_CFG = 0 =&gt; ACC bandwidth = 260Hz  GYRO bandwidth = 256Hz)<br></td></tr
><tr
id=sl_svn1303_1191

><td class="source">  i2c_writeReg(MPU6050_ADDRESS, 0x1B, 0x18);             //GYRO_CONFIG   -- FS_SEL = 3: Full scale set to 2000 deg/sec<br></td></tr
><tr
id=sl_svn1303_1192

><td class="source">  // enable I2C bypass for AUX I2C<br></td></tr
><tr
id=sl_svn1303_1193

><td class="source">  #if defined(MAG)<br></td></tr
><tr
id=sl_svn1303_1194

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x37, 0x02);           //INT_PIN_CFG   -- INT_LEVEL=0 ; INT_OPEN=0 ; LATCH_INT_EN=0 ; INT_RD_CLEAR=0 ; FSYNC_INT_LEVEL=0 ; FSYNC_INT_EN=0 ; I2C_BYPASS_EN=1 ; CLKOUT_EN=0<br></td></tr
><tr
id=sl_svn1303_1195

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1196

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1197

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1198

><td class="source">void Gyro_getADC () {<br></td></tr
><tr
id=sl_svn1303_1199

><td class="source">  i2c_getSixRawADC(MPU6050_ADDRESS, 0x43);<br></td></tr
><tr
id=sl_svn1303_1200

><td class="source">  GYRO_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1])/4 , // range: +/- 8192; +/- 2000 deg/sec<br></td></tr
><tr
id=sl_svn1303_1201

><td class="source">                    ((rawADC[2]&lt;&lt;8) | rawADC[3])/4 ,<br></td></tr
><tr
id=sl_svn1303_1202

><td class="source">                    ((rawADC[4]&lt;&lt;8) | rawADC[5])/4 );<br></td></tr
><tr
id=sl_svn1303_1203

><td class="source">  GYRO_Common();<br></td></tr
><tr
id=sl_svn1303_1204

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1205

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1206

><td class="source">void ACC_init () {<br></td></tr
><tr
id=sl_svn1303_1207

><td class="source">  i2c_writeReg(MPU6050_ADDRESS, 0x1C, 0x10);             //ACCEL_CONFIG  -- AFS_SEL=2 (Full Scale = +/-8G)  ; ACCELL_HPF=0   //note something is wrong in the spec.<br></td></tr
><tr
id=sl_svn1303_1208

><td class="source">  //note: something seems to be wrong in the spec here. With AFS=2 1G = 4096 but according to my measurement: 1G=2048 (and 2048/8 = 256)<br></td></tr
><tr
id=sl_svn1303_1209

><td class="source">  //confirmed here: http://www.multiwii.com/forum/viewtopic.php?f=8&amp;t=1080&amp;start=10#p7480<br></td></tr
><tr
id=sl_svn1303_1210

><td class="source">  #if defined(FREEIMUv04)<br></td></tr
><tr
id=sl_svn1303_1211

><td class="source">    acc_1G = 255;<br></td></tr
><tr
id=sl_svn1303_1212

><td class="source">  #else<br></td></tr
><tr
id=sl_svn1303_1213

><td class="source">    acc_1G = 512;<br></td></tr
><tr
id=sl_svn1303_1214

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1215

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1216

><td class="source">  #if defined(MPU6050_I2C_AUX_MASTER)<br></td></tr
><tr
id=sl_svn1303_1217

><td class="source">    //at this stage, the MAG is configured via the original MAG init function in I2C bypass mode<br></td></tr
><tr
id=sl_svn1303_1218

><td class="source">    //now we configure MPU as a I2C Master device to handle the MAG via the I2C AUX port (done here for HMC5883)<br></td></tr
><tr
id=sl_svn1303_1219

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x6A, 0b00100000);       //USER_CTRL     -- DMP_EN=0 ; FIFO_EN=0 ; I2C_MST_EN=1 (I2C master mode) ; I2C_IF_DIS=0 ; FIFO_RESET=0 ; I2C_MST_RESET=0 ; SIG_COND_RESET=0<br></td></tr
><tr
id=sl_svn1303_1220

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x37, 0x00);             //INT_PIN_CFG   -- INT_LEVEL=0 ; INT_OPEN=0 ; LATCH_INT_EN=0 ; INT_RD_CLEAR=0 ; FSYNC_INT_LEVEL=0 ; FSYNC_INT_EN=0 ; I2C_BYPASS_EN=0 ; CLKOUT_EN=0<br></td></tr
><tr
id=sl_svn1303_1221

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x24, 0x0D);             //I2C_MST_CTRL  -- MULT_MST_EN=0 ; WAIT_FOR_ES=0 ; SLV_3_FIFO_EN=0 ; I2C_MST_P_NSR=0 ; I2C_MST_CLK=13 (I2C slave speed bus = 400kHz)<br></td></tr
><tr
id=sl_svn1303_1222

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x25, 0x80|MAG_ADDRESS);//I2C_SLV0_ADDR -- I2C_SLV4_RW=1 (read operation) ; I2C_SLV4_ADDR=MAG_ADDRESS<br></td></tr
><tr
id=sl_svn1303_1223

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x26, MAG_DATA_REGISTER);//I2C_SLV0_REG  -- 6 data bytes of MAG are stored in 6 registers. First register address is MAG_DATA_REGISTER<br></td></tr
><tr
id=sl_svn1303_1224

><td class="source">    i2c_writeReg(MPU6050_ADDRESS, 0x27, 0x86);             //I2C_SLV0_CTRL -- I2C_SLV0_EN=1 ; I2C_SLV0_BYTE_SW=0 ; I2C_SLV0_REG_DIS=0 ; I2C_SLV0_GRP=0 ; I2C_SLV0_LEN=3 (3x2 bytes)<br></td></tr
><tr
id=sl_svn1303_1225

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1226

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1227

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1228

><td class="source">void ACC_getADC () {<br></td></tr
><tr
id=sl_svn1303_1229

><td class="source">  i2c_getSixRawADC(MPU6050_ADDRESS, 0x3B);<br></td></tr
><tr
id=sl_svn1303_1230

><td class="source">  ACC_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1])/8 ,<br></td></tr
><tr
id=sl_svn1303_1231

><td class="source">                   ((rawADC[2]&lt;&lt;8) | rawADC[3])/8 ,<br></td></tr
><tr
id=sl_svn1303_1232

><td class="source">                   ((rawADC[4]&lt;&lt;8) | rawADC[5])/8 );<br></td></tr
><tr
id=sl_svn1303_1233

><td class="source">  ACC_Common();<br></td></tr
><tr
id=sl_svn1303_1234

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1235

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1236

><td class="source">//The MAG acquisition function must be replaced because we now talk to the MPU device<br></td></tr
><tr
id=sl_svn1303_1237

><td class="source">  #if defined(MPU6050_I2C_AUX_MASTER)<br></td></tr
><tr
id=sl_svn1303_1238

><td class="source">    void Device_Mag_getADC() {<br></td></tr
><tr
id=sl_svn1303_1239

><td class="source">      i2c_getSixRawADC(MPU6050_ADDRESS, 0x49);               //0x49 is the first memory room for EXT_SENS_DATA<br></td></tr
><tr
id=sl_svn1303_1240

><td class="source">      #if defined(HMC5843)<br></td></tr
><tr
id=sl_svn1303_1241

><td class="source">        MAG_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1]) ,<br></td></tr
><tr
id=sl_svn1303_1242

><td class="source">                         ((rawADC[2]&lt;&lt;8) | rawADC[3]) ,<br></td></tr
><tr
id=sl_svn1303_1243

><td class="source">                         ((rawADC[4]&lt;&lt;8) | rawADC[5]) );<br></td></tr
><tr
id=sl_svn1303_1244

><td class="source">      #endif<br></td></tr
><tr
id=sl_svn1303_1245

><td class="source">      #if defined (HMC5883)  <br></td></tr
><tr
id=sl_svn1303_1246

><td class="source">        MAG_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1]) ,<br></td></tr
><tr
id=sl_svn1303_1247

><td class="source">                         ((rawADC[4]&lt;&lt;8) | rawADC[5]) ,<br></td></tr
><tr
id=sl_svn1303_1248

><td class="source">                         ((rawADC[2]&lt;&lt;8) | rawADC[3]) );<br></td></tr
><tr
id=sl_svn1303_1249

><td class="source">      #endif<br></td></tr
><tr
id=sl_svn1303_1250

><td class="source">      #if defined (MAG3110)<br></td></tr
><tr
id=sl_svn1303_1251

><td class="source">        MAG_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1]) ,          <br></td></tr
><tr
id=sl_svn1303_1252

><td class="source">                         ((rawADC[2]&lt;&lt;8) | rawADC[3]) ,     <br></td></tr
><tr
id=sl_svn1303_1253

><td class="source">                         ((rawADC[4]&lt;&lt;8) | rawADC[5]) );<br></td></tr
><tr
id=sl_svn1303_1254

><td class="source">      #endif<br></td></tr
><tr
id=sl_svn1303_1255

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1256

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1257

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1258

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1259

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1260

><td class="source">// I2C Gyroscope MPU3050<br></td></tr
><tr
id=sl_svn1303_1261

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1262

><td class="source">#if defined(MPU3050)<br></td></tr
><tr
id=sl_svn1303_1263

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1264

><td class="source">void Gyro_init() {<br></td></tr
><tr
id=sl_svn1303_1265

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz<br></td></tr
><tr
id=sl_svn1303_1266

><td class="source">  i2c_writeReg(MPU3050_ADDRESS, 0x3E, 0x80);             //PWR_MGMT_1    -- DEVICE_RESET 1<br></td></tr
><tr
id=sl_svn1303_1267

><td class="source">  delay(5);<br></td></tr
><tr
id=sl_svn1303_1268

><td class="source">  i2c_writeReg(MPU3050_ADDRESS, 0x3E, 0x03);             //PWR_MGMT_1    -- SLEEP 0; CYCLE 0; TEMP_DIS 0; CLKSEL 3 (PLL with Z Gyro reference)<br></td></tr
><tr
id=sl_svn1303_1269

><td class="source">  i2c_writeReg(MPU3050_ADDRESS, 0x16, MPU3050_DLPF_CFG + 0x18); // Gyro CONFIG   -- EXT_SYNC_SET 0 (disable input pin for data sync) ; default DLPF_CFG = 0 =&gt; GYRO bandwidth = 256Hz); -- FS_SEL = 3: Full scale set to 2000 deg/sec<br></td></tr
><tr
id=sl_svn1303_1270

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1271

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1272

><td class="source">void Gyro_getADC () {<br></td></tr
><tr
id=sl_svn1303_1273

><td class="source">  i2c_getSixRawADC(MPU3050_ADDRESS, 0x1D);<br></td></tr
><tr
id=sl_svn1303_1274

><td class="source">  GYRO_ORIENTATION( ((rawADC[0]&lt;&lt;8) | rawADC[1])/4 , // range: +/- 8192; +/- 2000 deg/sec<br></td></tr
><tr
id=sl_svn1303_1275

><td class="source">                    ((rawADC[2]&lt;&lt;8) | rawADC[3])/4 ,<br></td></tr
><tr
id=sl_svn1303_1276

><td class="source">                    ((rawADC[4]&lt;&lt;8) | rawADC[5])/4 );<br></td></tr
><tr
id=sl_svn1303_1277

><td class="source">  GYRO_Common();<br></td></tr
><tr
id=sl_svn1303_1278

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1279

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1280

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1281

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1282

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1283

><td class="source">#if defined(WMP) || defined(NUNCHUCK)<br></td></tr
><tr
id=sl_svn1303_1284

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1285

><td class="source">// I2C Wii Motion Plus + optional Nunchuk<br></td></tr
><tr
id=sl_svn1303_1286

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1287

><td class="source">// I2C adress 1: 0x53 (7bit)<br></td></tr
><tr
id=sl_svn1303_1288

><td class="source">// I2C adress 2: 0x52 (7bit)<br></td></tr
><tr
id=sl_svn1303_1289

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1290

><td class="source">#define WMP_ADDRESS_1 0x53<br></td></tr
><tr
id=sl_svn1303_1291

><td class="source">#define WMP_ADDRESS_2 0x52<br></td></tr
><tr
id=sl_svn1303_1292

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1293

><td class="source">void Gyro_init() {<br></td></tr
><tr
id=sl_svn1303_1294

><td class="source">  delay(250);<br></td></tr
><tr
id=sl_svn1303_1295

><td class="source">  i2c_writeReg(WMP_ADDRESS_1, 0xF0, 0x55); // Initialize Extension<br></td></tr
><tr
id=sl_svn1303_1296

><td class="source">  delay(250);<br></td></tr
><tr
id=sl_svn1303_1297

><td class="source">  i2c_writeReg(WMP_ADDRESS_1, 0xFE, 0x05); // Activate Nunchuck pass-through mode<br></td></tr
><tr
id=sl_svn1303_1298

><td class="source">  delay(250);<br></td></tr
><tr
id=sl_svn1303_1299

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1300

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1301

><td class="source">void Gyro_getADC() {<br></td></tr
><tr
id=sl_svn1303_1302

><td class="source">  uint8_t axis;<br></td></tr
><tr
id=sl_svn1303_1303

><td class="source">  TWBR = ((F_CPU / I2C_SPEED) - 16) / 2; // change the I2C clock rate<br></td></tr
><tr
id=sl_svn1303_1304

><td class="source">  i2c_getSixRawADC(WMP_ADDRESS_2,0x00);<br></td></tr
><tr
id=sl_svn1303_1305

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1306

><td class="source">  if (micros() &lt; (neutralizeTime + NEUTRALIZE_DELAY)) {//we neutralize data in case of blocking+hard reset state<br></td></tr
><tr
id=sl_svn1303_1307

><td class="source">    for (axis = 0; axis &lt; 3; axis++) {gyroADC[axis]=0;accADC[axis]=0;}<br></td></tr
><tr
id=sl_svn1303_1308

><td class="source">    accADC[YAW] = acc_1G;<br></td></tr
><tr
id=sl_svn1303_1309

><td class="source">    f.NUNCHUKDATA = 0;<br></td></tr
><tr
id=sl_svn1303_1310

><td class="source">  } <br></td></tr
><tr
id=sl_svn1303_1311

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1312

><td class="source">  // Wii Motion Plus Data<br></td></tr
><tr
id=sl_svn1303_1313

><td class="source">  if ( (rawADC[5]&amp;0x03) == 0x02 ) {<br></td></tr
><tr
id=sl_svn1303_1314

><td class="source">    // Assemble 14bit data <br></td></tr
><tr
id=sl_svn1303_1315

><td class="source">    gyroADC[ROLL]  = - ( ((rawADC[5]&gt;&gt;2)&lt;&lt;8) | rawADC[2] ); //range: +/- 8192<br></td></tr
><tr
id=sl_svn1303_1316

><td class="source">    gyroADC[PITCH] = - ( ((rawADC[4]&gt;&gt;2)&lt;&lt;8) | rawADC[1] );<br></td></tr
><tr
id=sl_svn1303_1317

><td class="source">    gyroADC[YAW]  =  - ( ((rawADC[3]&gt;&gt;2)&lt;&lt;8) | rawADC[0] );<br></td></tr
><tr
id=sl_svn1303_1318

><td class="source">    GYRO_Common();<br></td></tr
><tr
id=sl_svn1303_1319

><td class="source">    // Check if slow bit is set and normalize to fast mode range<br></td></tr
><tr
id=sl_svn1303_1320

><td class="source">    gyroADC[ROLL]  = (rawADC[3]&amp;0x01)     ? gyroADC[ROLL]/5  : gyroADC[ROLL];  //the ratio 1/5 is not exactly the IDG600 or ISZ650 specification <br></td></tr
><tr
id=sl_svn1303_1321

><td class="source">    gyroADC[PITCH] = (rawADC[4]&amp;0x02)&gt;&gt;1  ? gyroADC[PITCH]/5 : gyroADC[PITCH]; //we detect here the slow of fast mode WMP gyros values (see wiibrew for more details)<br></td></tr
><tr
id=sl_svn1303_1322

><td class="source">    gyroADC[YAW]   = (rawADC[3]&amp;0x02)&gt;&gt;1  ? gyroADC[YAW]/5   : gyroADC[YAW];   // this step must be done after zero compensation    <br></td></tr
><tr
id=sl_svn1303_1323

><td class="source">    f.NUNCHUKDATA = 0;<br></td></tr
><tr
id=sl_svn1303_1324

><td class="source">  #if defined(NUNCHUCK)<br></td></tr
><tr
id=sl_svn1303_1325

><td class="source">    } else if ( (rawADC[5]&amp;0x03) == 0x00 ) { // Nunchuk Data<br></td></tr
><tr
id=sl_svn1303_1326

><td class="source">      ACC_ORIENTATION(  ( (rawADC[3]&lt;&lt;2)      | ((rawADC[5]&gt;&gt;4)&amp;0x02) ) ,<br></td></tr
><tr
id=sl_svn1303_1327

><td class="source">                      - ( (rawADC[2]&lt;&lt;2)      | ((rawADC[5]&gt;&gt;3)&amp;0x02) ) ,<br></td></tr
><tr
id=sl_svn1303_1328

><td class="source">                        ( ((rawADC[4]&gt;&gt;1)&lt;&lt;3) | ((rawADC[5]&gt;&gt;5)&amp;0x06) ) );<br></td></tr
><tr
id=sl_svn1303_1329

><td class="source">      ACC_Common();<br></td></tr
><tr
id=sl_svn1303_1330

><td class="source">      f.NUNCHUKDATA = 1;<br></td></tr
><tr
id=sl_svn1303_1331

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1332

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1333

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1334

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1335

><td class="source">#if defined(NUNCHUCK)<br></td></tr
><tr
id=sl_svn1303_1336

><td class="source">  void ACC_init () {<br></td></tr
><tr
id=sl_svn1303_1337

><td class="source">    // We need to set acc_1G for the Nunchuk beforehand<br></td></tr
><tr
id=sl_svn1303_1338

><td class="source">    // If a different accelerometer is used, it will be overwritten by its ACC_init() later.<br></td></tr
><tr
id=sl_svn1303_1339

><td class="source">    acc_1G = 200;<br></td></tr
><tr
id=sl_svn1303_1340

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1341

><td class="source">  void ACC_getADC () { // it&#39;s done ine the WMP gyro part<br></td></tr
><tr
id=sl_svn1303_1342

><td class="source">    Gyro_getADC();<br></td></tr
><tr
id=sl_svn1303_1343

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1344

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1345

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1346

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1347

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1348

><td class="source">#if defined(TINY_GPS) | defined(TINY_GPS_SONAR)<br></td></tr
><tr
id=sl_svn1303_1349

><td class="source">void tinygps_query(void) {<br></td></tr
><tr
id=sl_svn1303_1350

><td class="source">  struct nav_data_t navi;<br></td></tr
><tr
id=sl_svn1303_1351

><td class="source">  int16_t i2c_errors = i2c_errors_count;<br></td></tr
><tr
id=sl_svn1303_1352

><td class="source">  /* copy GPS data to local struct */<br></td></tr
><tr
id=sl_svn1303_1353

><td class="source">  i2c_read_to_buf(TINY_GPS_TWI_ADD, &amp;navi, sizeof(navi));<br></td></tr
><tr
id=sl_svn1303_1354

><td class="source">  /* did we generate any errors? */<br></td></tr
><tr
id=sl_svn1303_1355

><td class="source">  if (i2c_errors == i2c_errors_count) {<br></td></tr
><tr
id=sl_svn1303_1356

><td class="source">    #if defined(TINY_GPS)<br></td></tr
><tr
id=sl_svn1303_1357

><td class="source">    GPS_numSat = navi.gps.sats;<br></td></tr
><tr
id=sl_svn1303_1358

><td class="source">    f.GPS_FIX = (navi.gps.quality &gt; 0);<br></td></tr
><tr
id=sl_svn1303_1359

><td class="source">    GPS_coord[LAT] = (navi.gps.flags &amp; 1&lt;&lt;NMEA_RMC_FLAGS_LAT_NORTH ? 1 : -1) * GPS_coord_to_decimal(&amp;navi.gps.lat);<br></td></tr
><tr
id=sl_svn1303_1360

><td class="source">    GPS_coord[LON] = (navi.gps.flags &amp; 1&lt;&lt;NMEA_RMC_FLAGS_LON_EAST ? 1 : -1) * GPS_coord_to_decimal(&amp;navi.gps.lon);<br></td></tr
><tr
id=sl_svn1303_1361

><td class="source">    GPS_altitude = navi.gps.alt.m;<br></td></tr
><tr
id=sl_svn1303_1362

><td class="source">    #endif<br></td></tr
><tr
id=sl_svn1303_1363

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1364

><td class="source">    #if defined(TINY_GPS_SONAR)<br></td></tr
><tr
id=sl_svn1303_1365

><td class="source">    sonarAlt = navi.sonar.distance;<br></td></tr
><tr
id=sl_svn1303_1366

><td class="source">    #endif<br></td></tr
><tr
id=sl_svn1303_1367

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1368

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1369

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1370

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1371

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1372

><td class="source">// I2C Sonar SRF08<br></td></tr
><tr
id=sl_svn1303_1373

><td class="source">// ************************************************************************************************************<br></td></tr
><tr
id=sl_svn1303_1374

><td class="source">// first contribution from guru_florida (02-25-2012)<br></td></tr
><tr
id=sl_svn1303_1375

><td class="source">//<br></td></tr
><tr
id=sl_svn1303_1376

><td class="source">// specs are here: http://www.meas-spec.com/downloads/MS5611-01BA03.pdf<br></td></tr
><tr
id=sl_svn1303_1377

><td class="source">// useful info on pages 7 -&gt; 12<br></td></tr
><tr
id=sl_svn1303_1378

><td class="source">#if defined(SRF02) || defined(SRF08) || defined(SRF10) || defined(SRC235)<br></td></tr
><tr
id=sl_svn1303_1379

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1380

><td class="source">// the default address for any new sensor found on the bus<br></td></tr
><tr
id=sl_svn1303_1381

><td class="source">// the code will move new sonars to the next available sonar address in range of F0-FE so that another<br></td></tr
><tr
id=sl_svn1303_1382

><td class="source">// sonar sensor can be added again.<br></td></tr
><tr
id=sl_svn1303_1383

><td class="source">// Thus, add only 1 sonar sensor at a time, poweroff, then wire the next, power on, wait for flashing light and repeat<br></td></tr
><tr
id=sl_svn1303_1384

><td class="source">#if !defined(SRF08_DEFAULT_ADDRESS) <br></td></tr
><tr
id=sl_svn1303_1385

><td class="source">  #define SRF08_DEFAULT_ADDRESS 0x70<br></td></tr
><tr
id=sl_svn1303_1386

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1387

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1388

><td class="source">#if !defined(SRF08_RANGE_WAIT) <br></td></tr
><tr
id=sl_svn1303_1389

><td class="source">  #define SRF08_RANGE_WAIT     80000      // delay between Ping and Range Read commands<br></td></tr
><tr
id=sl_svn1303_1390

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1391

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1392

><td class="source">#if !defined(SRF08_RANGE_SLEEP) <br></td></tr
><tr
id=sl_svn1303_1393

><td class="source">  #define SRF08_RANGE_SLEEP    35000      // sleep this long before starting another Ping<br></td></tr
><tr
id=sl_svn1303_1394

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1395

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1396

><td class="source">#if !defined(SRF08_SENSOR_FIRST) <br></td></tr
><tr
id=sl_svn1303_1397

><td class="source">  #define SRF08_SENSOR_FIRST    0xF0    // the first sensor i2c address (after it has been moved)<br></td></tr
><tr
id=sl_svn1303_1398

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1399

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1400

><td class="source">#if !defined(SRF08_MAX_SENSORS) <br></td></tr
><tr
id=sl_svn1303_1401

><td class="source">  #define SRF08_MAX_SENSORS    4        // maximum number of sensors we&#39;ll allow (can go up to 8)<br></td></tr
><tr
id=sl_svn1303_1402

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1403

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1404

><td class="source">#define SONAR_MULTICAST_PING<br></td></tr
><tr
id=sl_svn1303_1405

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1406

><td class="source">// registers of the device<br></td></tr
><tr
id=sl_svn1303_1407

><td class="source">#define SRF08_REV_COMMAND    0<br></td></tr
><tr
id=sl_svn1303_1408

><td class="source">#define SRF08_LIGHT_GAIN     1<br></td></tr
><tr
id=sl_svn1303_1409

><td class="source">#define SRF08_ECHO_RANGE     2<br></td></tr
><tr
id=sl_svn1303_1410

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1411

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1412

><td class="source">static struct {<br></td></tr
><tr
id=sl_svn1303_1413

><td class="source">  // sensor registers from the MS561101BA datasheet<br></td></tr
><tr
id=sl_svn1303_1414

><td class="source">  int32_t  range[SRF08_MAX_SENSORS];<br></td></tr
><tr
id=sl_svn1303_1415

><td class="source">  int8_t   sensors;              // the number of sensors present<br></td></tr
><tr
id=sl_svn1303_1416

><td class="source">  int8_t   current;              // the current sensor being read<br></td></tr
><tr
id=sl_svn1303_1417

><td class="source">  uint8_t  state;<br></td></tr
><tr
id=sl_svn1303_1418

><td class="source">  uint32_t deadline;<br></td></tr
><tr
id=sl_svn1303_1419

><td class="source">} srf08_ctx;<br></td></tr
><tr
id=sl_svn1303_1420

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1421

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1422

><td class="source">// read uncompensated temperature value: send command first<br></td></tr
><tr
id=sl_svn1303_1423

><td class="source">void Sonar_init() {<br></td></tr
><tr
id=sl_svn1303_1424

><td class="source">  memset(&amp;srf08_ctx, 0, sizeof(srf08_ctx));<br></td></tr
><tr
id=sl_svn1303_1425

><td class="source">  srf08_ctx.deadline = 4000000;<br></td></tr
><tr
id=sl_svn1303_1426

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1427

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1428

><td class="source">// this function works like readReg accept a failed read is a normal expectation<br></td></tr
><tr
id=sl_svn1303_1429

><td class="source">// use for testing the existence of sensors on the i2c bus<br></td></tr
><tr
id=sl_svn1303_1430

><td class="source">// a 0xffff code is returned if the read failed<br></td></tr
><tr
id=sl_svn1303_1431

><td class="source">uint16_t i2c_try_readReg(uint8_t add, uint8_t reg) {<br></td></tr
><tr
id=sl_svn1303_1432

><td class="source">  uint16_t count = 255;<br></td></tr
><tr
id=sl_svn1303_1433

><td class="source">  i2c_rep_start(add&lt;&lt;1);  // I2C write direction<br></td></tr
><tr
id=sl_svn1303_1434

><td class="source">  i2c_write(reg);        // register selection<br></td></tr
><tr
id=sl_svn1303_1435

><td class="source">  i2c_rep_start((add&lt;&lt;1)|1);  // I2C read direction<br></td></tr
><tr
id=sl_svn1303_1436

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1437

><td class="source">  TWCR = (1&lt;&lt;TWINT) | (1&lt;&lt;TWEN);<br></td></tr
><tr
id=sl_svn1303_1438

><td class="source">  while (!(TWCR &amp; (1&lt;&lt;TWINT))) {<br></td></tr
><tr
id=sl_svn1303_1439

><td class="source">    count--;<br></td></tr
><tr
id=sl_svn1303_1440

><td class="source">    if (count==0) {              //we are in a blocking state =&gt; we don&#39;t insist<br></td></tr
><tr
id=sl_svn1303_1441

><td class="source">      TWCR = 0;                  //and we force a reset on TWINT register<br></td></tr
><tr
id=sl_svn1303_1442

><td class="source">      return 0xffff;  // return failure to read<br></td></tr
><tr
id=sl_svn1303_1443

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1444

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1445

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1446

><td class="source">  uint8_t r = TWDR;<br></td></tr
><tr
id=sl_svn1303_1447

><td class="source">  i2c_stop();<br></td></tr
><tr
id=sl_svn1303_1448

><td class="source">  return r;  <br></td></tr
><tr
id=sl_svn1303_1449

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1450

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1451

><td class="source">// read a 16bit unsigned int from the i2c bus<br></td></tr
><tr
id=sl_svn1303_1452

><td class="source">uint16_t i2c_readReg16(int8_t addr, int8_t reg) {<br></td></tr
><tr
id=sl_svn1303_1453

><td class="source">  uint8_t b[2];<br></td></tr
><tr
id=sl_svn1303_1454

><td class="source">  i2c_read_reg_to_buf(addr, reg, &amp;b, sizeof(b));<br></td></tr
><tr
id=sl_svn1303_1455

><td class="source">  return (b[0]&lt;&lt;8) | b[1];<br></td></tr
><tr
id=sl_svn1303_1456

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1457

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1458

><td class="source">void i2c_srf08_change_addr(int8_t current, int8_t moveto) {<br></td></tr
><tr
id=sl_svn1303_1459

><td class="source">  // to change a srf08 address, we must write the following sequence to the command register<br></td></tr
><tr
id=sl_svn1303_1460

><td class="source">  // this sequence must occur as 4 seperate i2c transactions!!<br></td></tr
><tr
id=sl_svn1303_1461

><td class="source">  //   A0 AA A5 [addr]<br></td></tr
><tr
id=sl_svn1303_1462

><td class="source">  i2c_writeReg(current, SRF08_REV_COMMAND, 0xA0);  delay(30);<br></td></tr
><tr
id=sl_svn1303_1463

><td class="source">  i2c_writeReg(current, SRF08_REV_COMMAND, 0xAA);  delay(30);<br></td></tr
><tr
id=sl_svn1303_1464

><td class="source">  i2c_writeReg(current, SRF08_REV_COMMAND, 0xA5);  delay(30);<br></td></tr
><tr
id=sl_svn1303_1465

><td class="source">  i2c_writeReg(current, SRF08_REV_COMMAND, moveto);  delay(30); // now change i2c address<br></td></tr
><tr
id=sl_svn1303_1466

><td class="source">  blinkLED(5,1,2);<br></td></tr
><tr
id=sl_svn1303_1467

><td class="source">  #if defined(BUZZER)<br></td></tr
><tr
id=sl_svn1303_1468

><td class="source">   notification_confirmation = 2;<br></td></tr
><tr
id=sl_svn1303_1469

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1470

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1471

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1472

><td class="source">// discover previously known sensors and any new sensor (move new sensors to assigned area)<br></td></tr
><tr
id=sl_svn1303_1473

><td class="source">void i2c_srf08_discover() {<br></td></tr
><tr
id=sl_svn1303_1474

><td class="source">  uint8_t addr;<br></td></tr
><tr
id=sl_svn1303_1475

><td class="source">  uint16_t x;<br></td></tr
><tr
id=sl_svn1303_1476

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1477

><td class="source">  // determine how many sensors are plugged in<br></td></tr
><tr
id=sl_svn1303_1478

><td class="source">  srf08_ctx.sensors=0;<br></td></tr
><tr
id=sl_svn1303_1479

><td class="source">  addr = SRF08_SENSOR_FIRST;<br></td></tr
><tr
id=sl_svn1303_1480

><td class="source">  for(int i=0; i&lt;SRF08_MAX_SENSORS &amp;&amp; x!=0xff; i++) {<br></td></tr
><tr
id=sl_svn1303_1481

><td class="source">    // read the revision as a way to check if sensor exists at this location<br></td></tr
><tr
id=sl_svn1303_1482

><td class="source">    x = i2c_try_readReg(addr, SRF08_REV_COMMAND);<br></td></tr
><tr
id=sl_svn1303_1483

><td class="source">    if(x!=0xffff) {<br></td></tr
><tr
id=sl_svn1303_1484

><td class="source">      // detected a sensor at this address<br></td></tr
><tr
id=sl_svn1303_1485

><td class="source">      srf08_ctx.sensors++;<br></td></tr
><tr
id=sl_svn1303_1486

><td class="source">      addr += 2;<br></td></tr
><tr
id=sl_svn1303_1487

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1488

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1489

><td class="source">  <br></td></tr
><tr
id=sl_svn1303_1490

><td class="source">  // do not add sensors if we are already maxed<br></td></tr
><tr
id=sl_svn1303_1491

><td class="source">  if(srf08_ctx.sensors &lt; SRF08_MAX_SENSORS) {<br></td></tr
><tr
id=sl_svn1303_1492

><td class="source">    // now determine if any sensor is on the &#39;new sensor&#39; address (srf08 default address)<br></td></tr
><tr
id=sl_svn1303_1493

><td class="source">    // we try to read the revision number<br></td></tr
><tr
id=sl_svn1303_1494

><td class="source">    x = i2c_try_readReg(SRF08_DEFAULT_ADDRESS, SRF08_REV_COMMAND);<br></td></tr
><tr
id=sl_svn1303_1495

><td class="source">    if(x!=0xffff) {<br></td></tr
><tr
id=sl_svn1303_1496

><td class="source">      // new sensor detected at SRF08 default address<br></td></tr
><tr
id=sl_svn1303_1497

><td class="source">      i2c_srf08_change_addr(SRF08_DEFAULT_ADDRESS, addr);  // move sensor to the next address<br></td></tr
><tr
id=sl_svn1303_1498

><td class="source">      srf08_ctx.sensors++;<br></td></tr
><tr
id=sl_svn1303_1499

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1500

><td class="source">  }<br></td></tr
><tr
id=sl_svn1303_1501

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1502

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1503

><td class="source">void Sonar_update() {<br></td></tr
><tr
id=sl_svn1303_1504

><td class="source">  if (currentTime &lt; srf08_ctx.deadline || (srf08_ctx.state==0 &amp;&amp; f.ARMED)) return; <br></td></tr
><tr
id=sl_svn1303_1505

><td class="source">  srf08_ctx.deadline = currentTime;<br></td></tr
><tr
id=sl_svn1303_1506

><td class="source">  TWBR = ((F_CPU / 400000L) - 16) / 2; // change the I2C clock rate to 400kHz, SRF08 is ok with this speed<br></td></tr
><tr
id=sl_svn1303_1507

><td class="source">  switch (srf08_ctx.state) {<br></td></tr
><tr
id=sl_svn1303_1508

><td class="source">    case 0: <br></td></tr
><tr
id=sl_svn1303_1509

><td class="source">      i2c_srf08_discover();<br></td></tr
><tr
id=sl_svn1303_1510

><td class="source">      if(srf08_ctx.sensors&gt;0)<br></td></tr
><tr
id=sl_svn1303_1511

><td class="source">        srf08_ctx.state++; <br></td></tr
><tr
id=sl_svn1303_1512

><td class="source">      else<br></td></tr
><tr
id=sl_svn1303_1513

><td class="source">        srf08_ctx.deadline += 5000000; // wait 5 secs before trying search again<br></td></tr
><tr
id=sl_svn1303_1514

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_1515

><td class="source">    case 1: <br></td></tr
><tr
id=sl_svn1303_1516

><td class="source">      srf08_ctx.current=0;<br></td></tr
><tr
id=sl_svn1303_1517

><td class="source">      srf08_ctx.state++;<br></td></tr
><tr
id=sl_svn1303_1518

><td class="source">      srf08_ctx.deadline += SRF08_RANGE_SLEEP;<br></td></tr
><tr
id=sl_svn1303_1519

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_1520

><td class="source">#if defined(SONAR_MULTICAST_PING)<br></td></tr
><tr
id=sl_svn1303_1521

><td class="source">    case 2:<br></td></tr
><tr
id=sl_svn1303_1522

><td class="source">      // send a ping via the general broadcast address<br></td></tr
><tr
id=sl_svn1303_1523

><td class="source">      i2c_writeReg(0, SRF08_REV_COMMAND, 0x51);  // start ranging, result in centimeters<br></td></tr
><tr
id=sl_svn1303_1524

><td class="source">      srf08_ctx.state++;<br></td></tr
><tr
id=sl_svn1303_1525

><td class="source">      srf08_ctx.deadline += SRF08_RANGE_WAIT;<br></td></tr
><tr
id=sl_svn1303_1526

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_1527

><td class="source">    case 3: <br></td></tr
><tr
id=sl_svn1303_1528

><td class="source">      srf08_ctx.range[srf08_ctx.current] = i2c_readReg16( SRF08_SENSOR_FIRST+(srf08_ctx.current&lt;&lt;1), SRF08_ECHO_RANGE);<br></td></tr
><tr
id=sl_svn1303_1529

><td class="source">      srf08_ctx.current++;<br></td></tr
><tr
id=sl_svn1303_1530

><td class="source">      if(srf08_ctx.current &gt;= srf08_ctx.sensors)<br></td></tr
><tr
id=sl_svn1303_1531

><td class="source">        srf08_ctx.state=1;<br></td></tr
><tr
id=sl_svn1303_1532

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_1533

><td class="source">#else<br></td></tr
><tr
id=sl_svn1303_1534

><td class="source">    case 2:<br></td></tr
><tr
id=sl_svn1303_1535

><td class="source">      // send a ping to the current sensor<br></td></tr
><tr
id=sl_svn1303_1536

><td class="source">      i2c_writeReg(SRF08_SENSOR_FIRST+(srf08_ctx.current&lt;&lt;1), SRF08_REV_COMMAND, 0x51);  // start ranging, result in centimeters<br></td></tr
><tr
id=sl_svn1303_1537

><td class="source">      srf08_ctx.state++;<br></td></tr
><tr
id=sl_svn1303_1538

><td class="source">      srf08_ctx.deadline += SRF08_RANGE_WAIT;<br></td></tr
><tr
id=sl_svn1303_1539

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_1540

><td class="source">    case 3: <br></td></tr
><tr
id=sl_svn1303_1541

><td class="source">      srf08_ctx.range[srf08_ctx.current] = i2c_readReg16(SRF08_SENSOR_FIRST+(srf08_ctx.current&lt;&lt;1), SRF08_ECHO_RANGE);<br></td></tr
><tr
id=sl_svn1303_1542

><td class="source">      srf08_ctx.current++;<br></td></tr
><tr
id=sl_svn1303_1543

><td class="source">      if(srf08_ctx.current &gt;= srf08_ctx.sensors)<br></td></tr
><tr
id=sl_svn1303_1544

><td class="source">        srf08_ctx.state=1;<br></td></tr
><tr
id=sl_svn1303_1545

><td class="source">      else<br></td></tr
><tr
id=sl_svn1303_1546

><td class="source">        srf08_ctx.state=2; <br></td></tr
><tr
id=sl_svn1303_1547

><td class="source">      break;<br></td></tr
><tr
id=sl_svn1303_1548

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1549

><td class="source">  } <br></td></tr
><tr
id=sl_svn1303_1550

><td class="source">sonarAlt = srf08_ctx.range[0]; //tmp<br></td></tr
><tr
id=sl_svn1303_1551

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1552

><td class="source">#elif defined(TINY_GPS_SONAR)<br></td></tr
><tr
id=sl_svn1303_1553

><td class="source">inline void Sonar_init() {}<br></td></tr
><tr
id=sl_svn1303_1554

><td class="source">void Sonar_update() {<br></td></tr
><tr
id=sl_svn1303_1555

><td class="source">  /* do not query the module again if the GPS loop already did */<br></td></tr
><tr
id=sl_svn1303_1556

><td class="source">  #if defined(TINY_GPS)<br></td></tr
><tr
id=sl_svn1303_1557

><td class="source">    if (!GPS_Enable) {<br></td></tr
><tr
id=sl_svn1303_1558

><td class="source">  #else<br></td></tr
><tr
id=sl_svn1303_1559

><td class="source">    {<br></td></tr
><tr
id=sl_svn1303_1560

><td class="source">  #endif<br></td></tr
><tr
id=sl_svn1303_1561

><td class="source">      tinygps_query();<br></td></tr
><tr
id=sl_svn1303_1562

><td class="source">    }<br></td></tr
><tr
id=sl_svn1303_1563

><td class="source">}<br></td></tr
><tr
id=sl_svn1303_1564

><td class="source">#else<br></td></tr
><tr
id=sl_svn1303_1565

><td class="source">inline void Sonar_init() {}<br></td></tr
><tr
id=sl_svn1303_1566

><td class="source">inline void Sonar_update() {}<br></td></tr
><tr
id=sl_svn1303_1567

><td class="source">#endif<br></td></tr
><tr
id=sl_svn1303_1568

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1569

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1570

><td class="source"><br></td></tr
><tr
id=sl_svn1303_1571

><td class="source">void initSensors() {<br></td></tr
><tr
id=sl_svn1303_1572

><td class="source">  delay(200);<br></td></tr
><tr
id=sl_svn1303_1573

><td class="source">  POWERPIN_ON;<br></td></tr
><tr
id=sl_svn1303_1574

><td class="source">  delay(100);<br></td></tr
><tr
id=sl_svn1303_1575

><td class="source">  i2c_init();<br></td></tr
><tr
id=sl_svn1303_1576

><td class="source">  delay(100);<br></td></tr
><tr
id=sl_svn1303_1577

><td class="source">  if (GYRO) Gyro_init();<br></td></tr
><tr
id=sl_svn1303_1578

><td class="source">  if (BARO) Baro_init();<br></td></tr
><tr
id=sl_svn1303_1579

><td class="source">  if (MAG) Mag_init();<br></td></tr
><tr
id=sl_svn1303_1580

><td class="source">  if (ACC) {ACC_init();acc_25deg = acc_1G * 0.423;}<br></td></tr
><tr
id=sl_svn1303_1581

><td class="source">  if (SONAR) Sonar_init();<br></td></tr
><tr
id=sl_svn1303_1582

><td class="source">  f.I2C_INIT_DONE = 1;<br></td></tr
><tr
id=sl_svn1303_1583

><td class="source">}<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn1303_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn1303_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/multiwii/source/detail?spec=svn1303&amp;r=1187">r1187</a>
 by dubusal
 on Oct 14, 2012
 &nbsp; <a href="/p/multiwii/source/diff?spec=svn1303&r=1187&amp;format=side&amp;path=/trunk/MultiWii/Sensors.ino&amp;old_path=/trunk/MultiWii/Sensors.ino&amp;old=988">Diff</a>
 </div>
 <pre>- sync with _shared</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/multiwii/source/detail?r=1187&spec=svn1303';
 var publish_url = '/p/multiwii/source/detail?r=1187&spec=svn1303#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/MultiWii/CREDITS.txt');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/CREDITS.txt?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/EEPROM.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/EEPROM.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/GPS.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/GPS.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/IMU.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/IMU.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/LCD.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/LCD.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/MultiWii.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/MultiWii.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/Output.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/Output.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/RX.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/RX.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/Sensors.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/Sensors.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 var selected_path = '/trunk/MultiWii/Sensors.ino';
 
 
 changed_paths.push('/trunk/MultiWii/Serial.ino');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/Serial.ino?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/config.h');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/config.h?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/def.h');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/def.h?r\x3d1187\x26spec\x3dsvn1303');
 
 
 changed_paths.push('/trunk/MultiWii/tinygps.h');
 changed_urls.push('/p/multiwii/source/browse/trunk/MultiWii/tinygps.h?r\x3d1187\x26spec\x3dsvn1303');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/CREDITS.txt?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/CREDITS.txt</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/EEPROM.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/EEPROM.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/GPS.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/GPS.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/IMU.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/IMU.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/LCD.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/LCD.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/MultiWii.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/MultiWii.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/Output.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/Output.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/RX.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/RX.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/Sensors.ino?r=1187&amp;spec=svn1303"
 selected="selected"
 >/trunk/MultiWii/Sensors.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/Serial.ino?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/Serial.ino</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/config.h?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/config.h</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/def.h?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/def.h</option>
 
 <option value="/p/multiwii/source/browse/trunk/MultiWii/tinygps.h?r=1187&amp;spec=svn1303"
 
 >/trunk/MultiWii/tinygps.h</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/multiwii/source/detail?spec=svn1303&r=988">r988</a>
 by dubusal
 on Jul 15, 2012
 &nbsp; <a href="/p/multiwii/source/diff?spec=svn1303&r=988&amp;format=side&amp;path=/trunk/MultiWii/Sensors.ino&amp;old_path=/trunk/MultiWii/Sensors.ino&amp;old=849">Diff</a>
 <br>
 <pre class="ifOpened">sync with _shared</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/multiwii/source/detail?spec=svn1303&r=849">r849</a>
 by dubusal
 on Jun 5, 2012
 &nbsp; <a href="/p/multiwii/source/diff?spec=svn1303&r=849&amp;format=side&amp;path=/trunk/MultiWii/Sensors.ino&amp;old_path=/trunk/MultiWii/Sensors.ino&amp;old=827">Diff</a>
 <br>
 <pre class="ifOpened">merge</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/multiwii/source/detail?spec=svn1303&r=827">r827</a>
 by dubusal
 on May 28, 2012
 &nbsp; <a href="/p/multiwii/source/diff?spec=svn1303&r=827&amp;format=side&amp;path=/trunk/MultiWii/Sensors.ino&amp;old_path=/trunk/MultiWii/Sensors.ino&amp;old=">Diff</a>
 <br>
 <pre class="ifOpened">[No log message]</pre>
 </div>
 
 
 <a href="/p/multiwii/source/list?path=/trunk/MultiWii/Sensors.ino&start=1187">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 59147 bytes,
 1583 lines</div>
 
 <div><a href="//multiwii.googlecode.com/svn/trunk/MultiWii/Sensors.ino">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>


<script src="https://ssl.gstatic.com/codesite/ph/16229512607128645344/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/16229512607128645344/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/16229512607128645344/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn1303': '/trunk/MultiWii/Sensors.ino'}
 codereviews = CR_controller.setup(
 {"profileUrl":"/u/115064288433996225253/","projectHomeUrl":"/p/multiwii","token":"7HOlx34rd1KVslX1OnrZZB0b4Hw:1357193109420","assetVersionPath":"https://ssl.gstatic.com/codesite/ph/16229512607128645344","domainName":null,"projectName":"multiwii","assetHostPath":"https://ssl.gstatic.com/codesite/ph","relativeBaseUrl":"","loggedInUserEmail":"nickatredbox@gmail.com"}, '', 'svn1303', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/16229512607128645344/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/16229512607128645344/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

