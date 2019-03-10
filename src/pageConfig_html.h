#ifndef PAGE_CONFIG_HTML_H
#define PAGE_CONFIG_HTML_H

const char CONFIG_html[] PROGMEM = R"=====(
<HTML>
<head>
	<title>PixelCon Frame</title>
	<meta name="viewport" content="width=device-width, initial-scale=1">
</head>
<style>
*:focus { outline:0; outline:none; }
.backgroundimage { background-size:640px; background-color:#ffffff; background-image: url(data:image/png;base64,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) }
.pixelated { -ms-interpolation-mode:nearest-neighbor; image-rendering:-moz-crisp-edges; image-rendering:-webkit-crisp-edges; image-rendering:-webkit-optimize-contrast; image-rendering:pixelated; image-rendering:crisp-edges; }	
.textSelectable { -webkit-user-select:text; -moz-user-select:text; -ms-user-select:text; -o-user-select:text; user-select:text; }
.textNotSelectable { -webkit-user-select:none; -moz-user-select:none; -ms-user-select:none; -o-user-select:none; user-select:none; }
.noselect { -webkit-user-select:none; -moz-user-select:none; -ms-user-select:none; -o-user-select:none; user-select:none; }
.standardtext { font-family:Roboto,Helvetica Neue,sans-serif; color:rgba(0,0,0,0.87); font-size:16px; }
.shadow { box-shadow: 0 1px 3px 0 rgba(0,0,0,.2), 0 1px 1px 0 rgba(0,0,0,.14), 0 2px 1px -1px rgba(0,0,0,.12); }
.spacer { width:100%; height:15px; }
.switch { position:relative; display:inline-block; vertical-align:middle; width:50px; height:24px; }
.switch input { opacity:0; width:0; height:0; }
.toggle { position:absolute; cursor:pointer; top:0; left:0; right:0; bottom:0; background-color:#ccc; -webkit-transition:.2s; transition:.2s; }
.toggle:before { position:absolute; content:""; height:18px; width:18px; left:3px; bottom:3px; background-color:white; -webkit-transition:.2s; transition:.2s; }
.toggle.round { border-radius:30px; }
.toggle.round:before { border-radius:50%; }
input:checked + .toggle { background-color:#2196F3; }
input:checked + .toggle:before { -webkit-transform:translateX(26px); -ms-transform:translateX(26px); transform:translateX(26px); }
.slider { -webkit-appearance:none; width:100%; height:10px; border-radius:5px; background:#ccc; outline:none; box-shadow: 0 1px 3px 0 rgba(0,0,0,.2), 0 1px 1px 0 rgba(0,0,0,.14), 0 2px 1px -1px rgba(0,0,0,.12); }
.slider::-webkit-slider-thumb { -webkit-appearance:none; appearance:none; width:20px; height:20px; border-radius:50%; background:#2196F3; cursor:pointer; box-shadow: 0 1px 3px 0 rgba(0,0,0,.2), 0 1px 1px 0 rgba(0,0,0,.14), 0 2px 1px -1px rgba(0,0,0,.12); }
.slider::-moz-range-thumb { width:20px; height:20px; border-radius:50%; background:#2196F3; cursor:pointer; box-shadow: 0 1px 3px 0 rgba(0,0,0,.2), 0 1px 1px 0 rgba(0,0,0,.14), 0 2px 1px -1px rgba(0,0,0,.12); }
.slider::-moz-range-track { background-color:#ccc; }
.label { display:inline-block; font-weight:600; margin-right:5px; vertical-align:middle; }
.textButton { display:inline-block; font-weight:500; background-color:#d4d4d4; color:#404040; padding:2px 7px; margin-top:-8px; cursor:pointer; }
.textButton:hover { background-color:#b7b7b7; }
.inputbox { display:inline-block; height:27px; width:100px; border:0px; padding:3px; text-align:center; vertical-align:middle; margin:2px; }
.inputbox:disabled { font-size:0px; background-color:#ccc; }
.section { position:relative; margin:10px; padding:10px; background-color:rgba(255, 255, 255, 0.7); }
.roundbutton { width:25px; min-width:25px; height:25px; border-radius:50%; text-align:center; font-weight:60; font-size:25px; line-height:25px; margin-right:5px; cursor:pointer; }
.roundbutton.remove { line-height:22px; color:#ffffff; background-color:#ababab; }
.roundbutton.add { line-height:25px; color:#ffffff; background-color:#2196f3; }
.squarebutton { display:inline-block; vertical-align:middle; width:80px; height:32px; text-align:center; line-height:32px; font-size:18px; cursor:pointer; background-color:#2196f3; color:#ffffff; line-height:32px; font-size:15px; font-weight:600; }
.squareButton:hover { background-color:#1a6cad; }
.squareButton.disabled { background-color:rgba(0,0,0,0.12); color:rgba(0,0,0,0.38); box-shadow:none; cursor:inherit; }
.pixelconcontainer { padding:2px; height:33px; width:100%; min-width:105px; background-color:rgba(128, 128, 128, 0.7); margin-left:3px; white-space:nowrap; overflow:hidden; }
.staticpixelconcontainer { width:100%; min-height:300px; max-height:calc(100% - 220px); background-color:rgba(128, 128, 128, 0.7); padding:5px; box-sizing:border-box; overflow-y:auto; text-align:center; }
.staticPixelcon { position:relative; display:inline-block; vertical-align:middle; width:60px; height:60px; background-color:#000; margin:5px; background-size:cover; cursor:pointer; }
.staticPixelconShade { display:none; position:absolute; top:0; bottom:0; left:0; right:0; background-color:rgba(51, 51, 51, 0.4); }
.staticPixelcon:hover .staticPixelconShade { display:block; }
.staticPixelconIcon { width:100%; height:100%; line-height:60px; cursor:pointer; color:#e6e6e6; font-size:35px; }
.sourcePreviewText { display:inline-block; vertical-align:middle; font-size:15px; color:#000; font-weight:500; line-height:34px; margin-left:5px; }
.sourcePreviewPixelconContainer { display:inline-block; vertical-align:middle; overflow:hidden; height:100%; max-width:100%; white-space:nowrap; }
.sourcePreviewPixelcon { width:30px; height:30px; display:inline-block; background-size:cover; margin:2px; }
.header { position:relative; background-color:#fafafa; box-shadow:0 1px 7px 0 rgba(0, 0, 0, 0.4); width:100%; height:50px; }
.title { position:absolute; top:0; bottom:0; left:0; right:0; text-align:center; line-height:50px; font-size:24px; }
.logo { position:absolute; top:4px; left:18px; width:40px; height:40px; cursor:pointer }
.logotxt { line-height:40px; text-shadow:0 0 30px #989898; font-size:15px; color:#333; font-weight:600; margin-left:-35%; width:72px; }
.logoimg { position:absolute; width:12px; height:12px; box-shadow:0 1px 3px 0 rgba(0, 0, 0, 0.3); }
.pageShade { position:absolute; background-color:rgba(51, 51, 51, 0.4); top:0; bottom:0; left:0; right:0; }
.messageBox { margin:150px auto 0px auto; font-weight:700; font-size:26px; text-align:center; }
</style>
<body class="backgroundimage pixelated standardtext textNotSelectable" style="width:100%; height:100%; margin:0px; padding:0px; background-color:#c7c7c7;">
	<div class="header">
		<div class="title">Frame Config</div>
		<a href="https://pixelcons.io/">
			<div class="logo">
				<div class="logotxt">PixelCons</div>
				<img id="logoimg0" class="logoimg pixelated" style="top:0px; left:0px;"></img>
				<img id="logoimg1" class="logoimg pixelated" style="top:0px; left:50%; margin-left:-6px;"></img>
				<img id="logoimg2" class="logoimg pixelated" style="top:0px; right:0px;"></img>
				<img id="logoimg3" class="logoimg pixelated" style="bottom:0px; left:0px;"></img>
				<img id="logoimg4" class="logoimg pixelated" style="bottom:0px; left:50%; margin-left:-6px;"></img>
				<img id="logoimg5" class="logoimg pixelated" style="bottom:0px; right:0px;"></img>
			</div>
		</a>
		<div id="saveButton" class="squarebutton disabled shadow" style="position:absolute; top:9px; right:5px;">SAVE</div>
	</div>
	
	<div style="max-height:calc(100% - 50px); overflow-y:auto; overflow-x:hidden;">
		<div id="loadingBox" class="section messageBox" style="width:150px;">Loading...</div>
		
		<div id="topSection" class="section" style="display:none;">
			<div class="label">Brightness</div>
			<div style="display:inline-block; width:calc(100% - 100px); max-width:300px">
				<input id="brightness" type="range" min="10" max="100" class="slider">
			</div>
			<div class="spacer"></div>
			<div class="label">Duration</div>
			<input id="duration" class="inputbox standardtext shadow" type="number" min="5" max="3600" style="width:60px;">
			<div id="importExport" class="squarebutton shadow" style="width:110px; float:right; height:30px; line-height:30px;">Import/Export</div>
		</div>
		
		<div id="bottomSection" class="section" style="display:none;">
			<label class="switch">
				<input id="viewModeCheckbox" type="checkbox">
				<span class="toggle round shadow"></span>
			</label>
			<div class="label">Static Mode</div>
			<div class="spacer"></div>

			<div id="dynamicModeView">
				<div class="label" style="margin-left:35px; width:98px;">Source</div>
				<div class="label">ID</div>
				<div id="refreshButton" class="textButton" style="float:right;">Refresh</div>
				<div id="sourceList" style="width:100%;">
					<div id="sourceContainerTemplate" style="font-size:0px; width:100%; display:flex; align-items:center;">
						<div id="sourceRemoveTemplate" class="roundbutton remove shadow noselect">-</div>
						<select id="sourceTypeTemplate" class="inputbox standardtext shadow" style="min-width:100px;">
							<option value="3">Owner</option><option value="1">Creator</option><option value="2">Collection</option><option value="4">All</option>
						</select>
						<input id="sourceIdTemplate" class="inputbox standardtext shadow" value="" style="width:100%; min-width:70px; max-width:200px; text-align:left;">
						<div id="sourcePreviewTemplate" class="pixelconcontainer">
							<div class="sourcePreviewPixelconContainer"></div>
							<div class="sourcePreviewText"></div>
						</div>
					</div>
				</div>
				<div id="sourceAdd" class="roundbutton add shadow noselect" style="margin-top:5px;">+</div>
			</div>
			
			<div id="staticModeView" class="staticpixelconcontainer">
				<div id="staticPixelconTemplate" class="staticPixelcon pixelated">
					<div class="staticPixelconShade staticPixelconIcon" style="font-size:14px;">Remove</div>
				</div>
				<div id="staticModeAdd" class="staticPixelcon" style="background-color:#5a5a5a;"><div class="staticPixelconIcon">+</div></div>
			</div>
		</div>
	</div>
	<div id="pageShade" class="pageShade" style="display:none;">
		<div id="savingBox" class="section messageBox" style="width:150px;">Saving...</div>
		<div id="editStaticPixelconWindow" class="section messageBox" style="width:300px; margin-top:100px;">
			<div style="width:240px; height:240px; margin:5px; background-color:rgba(128, 128, 128, 0.7); display:inline-block; padding:8px;">
				<div id="staticPixelconPreview" style="width:100%; height:100%; background-size:cover; line-height:240px;"></div>
			</div>
			<input id="staticPixelconPreviewId" class="inputbox standardtext shadow" value="" style="width:100%; min-width:70px; max-width:200px; text-align:left;">
			<div style="height:10px;"></div>
			<div id="staticPixelconPreviewButton" class="squarebutton shadow" style="width:110px; height:30px; line-height:30px;">Add</div>
		</div>
		<div id="importExportWindow" class="section messageBox" style="width:700px; height:500px; max-width:calc(100% - 40px); margin-top:55px; max-height:calc(100% - 100px); overflow:hidden;">
			<div class="label" style="width:100%; text-align:left; padding-left:10px;">Configuration Data</div>
			<textarea id="importExportJson" class="inputbox standardtext shadow" wrap="hard" style="resize:none; width:calc(100% - 10px); height:calc(100% - 75px); text-align:left;"></textarea>
			<div id="importStatus" style="display:inline-block; margin-top:5px; margin-left:10px; font-size:16px; float:left; text-align:left; max-width:calc(100% - 130px);"></div>
			<div id="importButton" class="squarebutton shadow" style="width:110px; height:30px; line-height:30px; float:right; margin-top:5px; margin-right:5px;">Import</div>
		</div>
	</div>
<script>
var dataTestMode=!1,jsonData={},loadedJSONData="",requestQueue=[],numPendingRequests=0,maxRequests=2,loadingBox=document.getElementById("loadingBox"),savingBox=document.getElementById("savingBox"),topSection=document.getElementById("topSection"),bottomSection=document.getElementById("bottomSection"),pageShade=document.getElementById("pageShade"),brightness=document.getElementById("brightness"),duration=document.getElementById("duration"),saveButton=document.getElementById("saveButton"),importExport=document.getElementById("importExport"),importExportJson=document.getElementById("importExportJson"),importStatus=document.getElementById("importStatus"),importButton=document.getElementById("importButton"),viewModeCheckbox=document.getElementById("viewModeCheckbox"),dynamicModeView=document.getElementById("dynamicModeView"),staticModeView=document.getElementById("staticModeView"),sourceList=document.getElementById("sourceList"),sourceContainerTemplate=document.getElementById("sourceContainerTemplate"),sourceRemoveTemplate=document.getElementById("sourceRemoveTemplate"),sourceTypeTemplate=document.getElementById("sourceTypeTemplate"),sourceIdTemplate=document.getElementById("sourceIdTemplate"),sourcePreviewTemplate=document.getElementById("sourcePreviewTemplate");sourceContainerTemplate.parentNode.removeChild(sourceContainerTemplate);var sourceAdd=document.getElementById("sourceAdd"),refreshButton=document.getElementById("refreshButton"),staticPixelconTemplate=document.getElementById("staticPixelconTemplate"),staticModeAdd=document.getElementById("staticModeAdd");staticPixelconTemplate.parentNode.removeChild(staticPixelconTemplate);var staticPixelconPreview=document.getElementById("staticPixelconPreview"),staticPixelconPreviewId=document.getElementById("staticPixelconPreviewId"),staticPixelconPreviewButton=document.getElementById("staticPixelconPreviewButton");pageShade.show=function(e,t){pageShade.clickToClose=t;for(var n=0;n<pageShade.children.length;n++){var a=pageShade.children[n];a.style.display=a.id==e?"":"none"}pageShade.style.display=""},pageShade.hide=function(){pageShade.style.display="none"},pageShade.onclick=function(e){pageShade.clickToClose&&e.srcElement==pageShade&&pageShade.hide()};var colorPalette={0:"#000000",1:"#1D2B53",2:"#7E2553",3:"#008751",4:"#AB5236",5:"#5F574F",6:"#C2C3C7",7:"#FFF1E8",8:"#FF004D",9:"#FFA300",a:"#FFFF27",b:"#00E756",c:"#29ADFF",d:"#83769C",e:"#FF77A8",f:"#FFCCAA"};function pixelconDataUrl(e){if(!(e=formatPixelcon(e)))return"";var t=document.createElement("canvas");t.width=24,t.height=24;for(var n=t.getContext("2d"),a=0;a<8;a++)for(var o=0;o<8;o++){var i=8*a+o;n.fillStyle=colorPalette[e[i]],n.fillRect(3*o,3*a,3*o+3,3*a+3)}return t.toDataURL("image/png")}function triggerOnChange(e,t){var n=null;e.oninput=function(){n&&(clearTimeout(n),n=null),n=setTimeout(function(){t.call(e)},500)}}function formatId(e,t){if(t){var n=parseInt(e);return isNaN(n)||!n||n>Math.pow(2,64)?null:(""+n).padStart(40,"0")}if(0==(e=e.toLowerCase()).indexOf("0x")&&(e=e.substr(2,e.length)),40!=e.length)return null;for(var a=0;a<40;a++){var o=e.charCodeAt(a);if(!(o>=48&&o<=57||o>=97&&o<=102))return null}return e}function formatPixelcon(e){if(0==(e=e.toLowerCase()).indexOf("0x")&&(e=e.substr(2,e.length)),64!=e.length)return null;for(var t=0;t<64;t++){var n=e.charCodeAt(t);if(!(n>=48&&n<=57||n>=97&&n<=102))return null}return e}function enableDisableSaveButton(){jsonDataChanged(jsonData)?saveButton.classList.remove("disabled"):saveButton.classList.contains("disabled")||saveButton.classList.add("disabled")}function clickSaveButton(){setData(jsonData,enableDisableSaveButton)}function setBrightness(){jsonData.brightness=parseInt(brightness.value),enableDisableSaveButton()}function setDuration(){var e=parseInt(duration.value);isNaN(e)?e=JSON.parse(loadedJSONData).duration:(e<5&&(e=5),e>3600&&(e=3600),duration.value=""+e),jsonData.duration=e,enableDisableSaveButton()}function setDurationDone(){var e=parseInt(duration.value);isNaN(e)&&(e=JSON.parse(loadedJSONData).duration,jsonData.duration=e,duration.value=""+e,enableDisableSaveButton())}function setViewMode(){viewModeCheckbox.checked?(jsonData.staticMode=!0,staticModeView.style.display="",dynamicModeView.style.display="none"):(jsonData.staticMode=!1,staticModeView.style.display="none",dynamicModeView.style.display=""),enableDisableSaveButton()}function cleanForExport(e){var t=JSON.parse(JSON.stringify(e));t.staticMode=e.staticMode,t.rpcClient=e.rpcClient,t.brightness=e.brightness,t.duration=e.duration,t.sources=[];for(var n=0;n<e.sources.length;n++){var a=formatId(e.sources[n].id,2==e.sources[n].type);if(4==e.sources[n].type&&(a=""),null!==a){var o={};o.type=["None","Creator","Collection","Owner","All"][e.sources[n].type],a?2==e.sources[n].type?o.id=""+parseInt(a):o.id="0x"+a:o.id=e.id,t.sources.push(o)}}t.staticPixelcon=[];for(n=0;n<e.staticPixelcon.length;n++)t.staticPixelcon.push("0x"+e.staticPixelcon[n]);return JSON.stringify(t,null,4)}function cleanForImport(e){try{var t=JSON.parse(e),n={};if(n.staticMode=void 0!==t.staticMode?!0===t.staticMode||"true"===t.staticMode:jsonData.staticMode,n.rpcClient=void 0!==t.rpcClient?t.rpcClient:jsonData.rpcClient,n.brightness=void 0!==t.brightness?parseInt(t.brightness):jsonData.brightness,n.brightness<10&&(n.brightness=10),n.brightness>100&&(n.brightness=100),n.duration=void 0!==t.duration?parseInt(t.duration):jsonData.duration,n.duration<5&&(n.duration=5),n.duration>3600&&(n.duration=3600),void 0===t.sources)n.sources=jsonData.sources;else{n.sources=[];for(var a=0;a<t.sources.length;a++){var o=(""+t.sources[a].type).trim().toLowerCase(),i=4==(o="creator"==o||"1"==o?1:"collection"==o||"2"==o?2:"owner"==o||"3"==o?3:"all"==o||"4"==o?4:null)?"":formatId(t.sources[a].id.trim(),2==o);if(null!==o&&null!==i){var s={};s.type=o,s.id=i,n.sources.push(s)}}}if(void 0===t.staticPixelcon)n.staticPixelcon=jsonData.staticPixelcon;else{n.staticPixelcon=[];for(a=0;a<t.staticPixelcon.length&&a<100;a++){(i=formatPixelcon(t.staticPixelcon[a].trim()))&&n.staticPixelcon.push(i)}}return n}catch(e){}return null}function doImport(){var e=cleanForImport(importExportJson.value);e?(loadData(e),pageShade.hide()):importStatus.innerText="Error Processing Configuration"}function doImportExport(){importStatus.innerText="",importExportJson.value=cleanForExport(jsonData),pageShade.show("importExportWindow",!0)}function crudSourceLine(e,t){var n=document.getElementById("sourceContainer"+e);if(t){if(n){(i=document.getElementById("sourceType"+e)).value=""+t.type;var a=document.getElementById("sourceId"+e);(s=formatId(t.id,2==t.type))?2==t.type?a.value=""+parseInt(s):a.value="0x"+s:a.value=t.id,a.disabled=4==t.type}else{var o=sourceContainerTemplate.cloneNode(!1);o.id="sourceContainer"+e,sourceList.appendChild(o);var i,s,r=sourceRemoveTemplate.cloneNode(!0);r.id="sourceRemove"+e,r.onclick=removeSourceClick,o.appendChild(r),(i=sourceTypeTemplate.cloneNode(!0)).id="sourceType"+e,i.value=""+t.type,i.onchange=setSourceType,o.appendChild(i),(a=sourceIdTemplate.cloneNode(!0)).id="sourceId"+e,(s=formatId(t.id,2==t.type))?2==t.type?a.value=""+parseInt(s):a.value="0x"+s:a.value=t.id,a.disabled=4==t.type,triggerOnChange(a,setSourceId),o.appendChild(a);var c=sourcePreviewTemplate.cloneNode(!0);c.id="sourcePreview"+e,o.appendChild(c)}updateSourcePreview(e)}else n&&n.parentNode.removeChild(n)}function getSourceIndex(e){return parseInt(e.id.substring(e.id.length-1,e.id.length))}function addSourceClick(){jsonData.sources.length<10&&jsonData.sources.push({type:1,id:""}),showSources(),enableDisableSaveButton()}function fetchPixelconForSource(e){var t=e.type+"_"+e.id;if(!e.loading||0!=e.loading.indexOf(t)){t+="_"+Math.floor(1e8*Math.random()),e.pixelcon=null,e.loading=t;var n=function(t){e.pixelcon=t||"error";for(var n=0;n<jsonData.sources.length;n++)if(jsonData.sources[n].loading==e.loading){e.loading=null,updateSourcePreview(n);break}e.loading=null};1==e.type?getForCreator(e.id,n):2==e.type?getForCollection(e.id,n):3==e.type?getForOwner(e.id,n):4==e.type?getAll(n):n(null)}}function updateSourcePreview(e){for(var t=jsonData.sources[e],n=document.getElementById("sourcePreview"+e).getElementsByClassName("sourcePreviewText")[0],a=document.getElementById("sourcePreview"+e).getElementsByClassName("sourcePreviewPixelconContainer")[0];a.firstChild;)a.removeChild(a.firstChild);if(t.pixelcon)if("error"==t.pixelcon)n.innerText="ERROR";else if(t.pixelcon.length>0){for(var o=0;o<t.pixelcon.length&&o<25;o++){var i=document.createElement("div");i.style.backgroundImage="url("+pixelconDataUrl(t.pixelcon[o])+")",i.classList.add("sourcePreviewPixelcon"),a.appendChild(i)}t.pixelcon.length<=25?n.innerText="":n.innerText="+"+(t.pixelcon.length-25)}else n.innerText="No PixelCons";else{var s=parseInt(document.getElementById("sourceType"+e).value),r=formatId(document.getElementById("sourceId"+e).value,2==s);4==s||r?(n.innerText="Loading...",fetchPixelconForSource(jsonData.sources[e])):n.innerText="Invalid ID"}}function showSources(){0==jsonData.sources.length&&jsonData.sources.push({type:1,id:""});for(var e=0;e<10;e++)crudSourceLine(e,jsonData.sources[e]);sourceAdd.style.display=jsonData.sources.length<10?"":"none"}function removeSourceClick(){var e=getSourceIndex(this);jsonData.sources.splice(e,1),showSources(),enableDisableSaveButton()}function setSourceType(){var e=getSourceIndex(this);jsonData.sources[e].type=parseInt(this.value),document.getElementById("sourceId"+e).disabled=4==parseInt(this.value),jsonData.sources[e].pixelcon=null,updateSourcePreview(e),enableDisableSaveButton()}function setSourceId(){var e=getSourceIndex(this),t=parseInt(document.getElementById("sourceType"+e).value),n=formatId(this.value,2==t);n?(jsonData.sources[e].id=n,this.value=2==t?""+parseInt(n):"0x"+n):jsonData.sources[e].id=this.value,jsonData.sources[e].pixelcon=null,updateSourcePreview(e),enableDisableSaveButton()}function refreshSources(){for(var e=0;e<jsonData.sources.length;e++)jsonData.sources[e].pixelcon=null,updateSourcePreview(e)}function crudStaticPixelcon(e,t){var n=document.getElementById("staticPixelcon"+(e+"").padStart(2,"0"));t?(n||((n=staticPixelconTemplate.cloneNode(!0)).id="staticPixelcon"+(e+"").padStart(2,"0"),n.onclick=editStaticPixelcon,n.onmouseenter=function(){setTimeout(function(){n.isClicking=!0})},n.onmouseleave=function(){setTimeout(function(){n.isClicking=!1})},staticModeView.insertBefore(n,staticModeAdd)),n.style.backgroundImage="url("+pixelconDataUrl(t)+")"):n&&n.parentNode.removeChild(n)}function showStaticPixelcon(){for(var e=0;e<100;e++)crudStaticPixelcon(e,jsonData.staticPixelcon[e]);staticModeAdd.style.display=jsonData.staticPixelcon.length<100?"":"none"}function getStaticPixelconIndex(e){return parseInt(e.id.substring(e.id.length-2,e.id.length))}function editStaticPixelcon(){var e=getStaticPixelconIndex(this);this.isClicking?(jsonData.staticPixelcon.splice(e,1),showStaticPixelcon(),enableDisableSaveButton()):(staticPixelconPreview.style.backgroundImage="url("+pixelconDataUrl(jsonData.staticPixelcon[e])+")",staticPixelconPreview.innerText="",staticPixelconPreviewId.style.display="none",staticPixelconPreviewButton.innerText="Remove",staticPixelconPreviewButton.classList.remove("disabled"),staticPixelconPreviewButton.onclick=function(){jsonData.staticPixelcon.splice(e,1),showStaticPixelcon(),enableDisableSaveButton(),pageShade.hide()},pageShade.show("editStaticPixelconWindow",!0))}function addStaticPixelcon(){staticPixelconPreviewId.style.display="",staticPixelconPreviewButton.innerText="Add",setPixelconPreviewId(),staticPixelconPreviewButton.onclick=function(){var e=formatPixelcon(staticPixelconPreviewId.value);e&&(jsonData.staticPixelcon.push(e),staticPixelconPreviewId.value="",showStaticPixelcon(),enableDisableSaveButton(),pageShade.hide())},pageShade.show("editStaticPixelconWindow",!0)}function setPixelconPreviewId(){var e=formatPixelcon(staticPixelconPreviewId.value);e?(staticPixelconPreviewButton.classList.remove("disabled"),staticPixelconPreview.style.backgroundImage="url("+pixelconDataUrl(e)+")",staticPixelconPreview.innerText=""):(staticPixelconPreviewButton.classList.contains("disabled")||staticPixelconPreviewButton.classList.add("disabled"),staticPixelconPreview.style.backgroundImage="",staticPixelconPreview.innerText="Invalid ID")}function loadData(e){e&&(jsonData=e,viewModeCheckbox.checked=jsonData.staticMode,brightness.value=jsonData.brightness,duration.value=jsonData.duration,setViewMode(),showSources(),showStaticPixelcon(),enableDisableSaveButton())}function checkRequestQueue(){for(;numPendingRequests<maxRequests&&requestQueue.length>0;){var e=requestQueue.shift();httpRequest(e.method,e.url,e.data,e.callback)}}function httpGet(e,t){requestQueue.push({method:"GET",url:e,data:null,callback:t}),checkRequestQueue()}function httpPOST(e,t,n){requestQueue.push({method:"POST",url:e,data:t,callback:n}),checkRequestQueue()}function httpRequest(e,t,n,a){numPendingRequests++;var o=!1,i=null;n&&(i=JSON.stringify(n));var s=new XMLHttpRequest;s.onreadystatechange=function(){o||4!=s.readyState||(a&&a(200==s.status?s.responseText:null),numPendingRequests--,o=!0,checkRequestQueue())},s.open(e,t,!0),s.send(i)}function getForCreator(e,t){httpPOST("https://"+(jsonData.rpcClient?jsonData.rpcClient:"mainnet.infura.io/v3/07d72fe8b8b74534a05d2091e108e26e"),{jsonrpc:"2.0",id:1,method:"eth_call",params:[{to:"0x5536B6aAdd29eAf0DB112Bb28046A5FaD3761bD4",data:"0xd4aa25cc000000000000000000000000"+e},"latest"]},function(e){e?getBasicDataFromFullArray(e,t):t&&t(null)})}function getForOwner(e,t){httpPOST("https://"+(jsonData.rpcClient?jsonData.rpcClient:"mainnet.infura.io/v3/07d72fe8b8b74534a05d2091e108e26e"),{jsonrpc:"2.0",id:1,method:"eth_call",params:[{to:"0x5536B6aAdd29eAf0DB112Bb28046A5FaD3761bD4",data:"0x57643118000000000000000000000000"+e},"latest"]},function(e){e?getBasicDataFromFullArray(e,t):t&&t(null)})}function getForCollection(e,t){httpPOST("https://"+(jsonData.rpcClient?jsonData.rpcClient:"mainnet.infura.io/v3/07d72fe8b8b74534a05d2091e108e26e"),{jsonrpc:"2.0",id:1,method:"eth_call",params:[{to:"0x5536B6aAdd29eAf0DB112Bb28046A5FaD3761bD4",data:"0xad732154000000000000000000000000"+e},"latest"]},function(e){e?getBasicDataFromFullArray(e,t):t&&t(null)})}function getAll(e){httpPOST("https://"+(jsonData.rpcClient?jsonData.rpcClient:"mainnet.infura.io/v3/07d72fe8b8b74534a05d2091e108e26e"),{jsonrpc:"2.0",id:1,method:"eth_call",params:[{to:"0x5536B6aAdd29eAf0DB112Bb28046A5FaD3761bD4",data:"0x18160ddd"},"latest"]},function(t){if(t){var n=parseInt(JSON.parse(t).result,16);if(0==n)e([]);else{var a=n;a>25&&(a=25);for(var o="0000000000000000000000000000000000000000000000000000000000000020"+a.toString(16).padStart(64,"0"),i=0;i<a;i++){o+=Math.floor(Math.random()*n).toString(16).padStart(64,"0")}getBasicData(o,function(t){t?(t.length=n,e&&e(t)):e&&e(null)})}}else e&&e(null)})}function getBasicData(e,t){httpPOST("https://"+(jsonData.rpcClient?jsonData.rpcClient:"mainnet.infura.io/v3/07d72fe8b8b74534a05d2091e108e26e"),{jsonrpc:"2.0",id:1,method:"eth_call",params:[{to:"0x5536B6aAdd29eAf0DB112Bb28046A5FaD3761bD4",data:"0xe2b31903"+e},"latest"]},function(n){if(n){for(var a=JSON.parse(n).result,o=a.substring(2,a.length),i=[],s=320;s<e.length+192;s+=64)i.push(o.substring(s,s+64));t&&t(i)}else t&&t(null)})}function getBasicDataFromFullArray(e,t){var n=JSON.parse(e).result,a=n.substring(2,n.length),o=a.length/64-2;0==o?t([]):getBasicData(limitArrayString(a,25),function(e){e?(e.length=o,t&&t(e)):t&&t(null)})}function limitArrayString(e,t){return e.length/64-2<=t?e:e=(e=e.substring(0,64*(t+2))).substring(0,64)+t.toString(16).padStart(64,"0")+e.substring(128,e.length)}document.getElementById("logoimg0").src=pixelconDataUrl("9a4994999499994999999999920990299cc99cc99cc77cc99cc00cc99cc9acc9"),document.getElementById("logoimg1").src=pixelconDataUrl("9a99999999999099900490999999999994999949994224999998899999988999"),document.getElementById("logoimg2").src=pixelconDataUrl("3b1331333133331333033033330330333331333333b303333333133333333333"),document.getElementById("logoimg3").src=pixelconDataUrl("8e8888888228822888022088880880888888888888e77e8882777728888ee888"),document.getElementById("logoimg4").src=pixelconDataUrl("9a999999990990999909909999999999907777099400004999477499999aa999"),document.getElementById("logoimg5").src=pixelconDataUrl("9a99999999999999944994499999999994000049903bb30994bbbb4999bbbb99"),saveButton.onclick=clickSaveButton,brightness.onchange=setBrightness,duration.oninput=setDuration,duration.onchange=setDurationDone,viewModeCheckbox.onchange=setViewMode,importExport.onclick=doImportExport,importButton.onclick=doImport,sourceAdd.onclick=addSourceClick,refreshButton.onclick=refreshSources,staticModeAdd.onclick=addStaticPixelcon,triggerOnChange(staticPixelconPreviewId,setPixelconPreviewId),getData(loadData);var hexSet=["0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f"],base64Set=["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","0","1","2","3","4","5","6","7","8","9","+","/"];function base64ToDec(e){if(e.length>1)return null;var t=base64Set.indexOf(e);return t>-1?t:0}function hexToBase64(e){if(e.length%2!=0)return null;for(var t=e.length%6,n="",a=0;a<e.length-t;a+=6){var o=parseInt(e.substring(a+0,a+6),16);n+=base64Set[o>>18&63]+base64Set[o>>12&63]+base64Set[o>>6&63]+base64Set[63&o]}if(4==t){o=parseInt(e.substring(e.length-4,e.length)+"00",16);n+=base64Set[o>>18&63]+base64Set[o>>12&63]+base64Set[o>>6&63]+"="}else if(2==t){o=parseInt(e.substring(e.length-2,e.length)+"0000",16);n+=base64Set[o>>18&63]+base64Set[o>>12&63]+"=="}return n}function bas64ToHex(e){if(e.length%4!=0)return null;for(var t="",n=0;n<e.length;n+=4){var a=(base64ToDec(e.charAt(n))<<18)+(base64ToDec(e.charAt(n+1))<<12)+(base64ToDec(e.charAt(n+2))<<6)+base64ToDec(e.charAt(n+3));t+=hexSet[a>>20&15]+hexSet[a>>16&15]+hexSet[a>>12&15]+hexSet[a>>8&15]+hexSet[a>>4&15]+hexSet[15&a]}return"="==e.charAt(e.length-2)?t=t.substring(0,t.length-4):"="==e.charAt(e.length-1)&&(t=t.substring(0,t.length-2)),t}function jsonDataChanged(e){return e=sanitizeJSONData(e),loadedJSONData!=JSON.stringify(e)}function sanitizeJSONData(e){(e=JSON.parse(JSON.stringify(e))).brightness=parseInt(e.brightness),e.duration=parseInt(e.duration);for(var t=e.sources.length-1;t>=0;t--){var n=parseInt(e.sources[t].type),a=formatId(e.sources[t].id,2==n);4==n?e.sources[t]={type:n,id:""}:a?e.sources[t]={type:n,id:a}:e.sources.splice(t,1)}return e.sources.sort(function(e,t){var n=e.id.localeCompare(t.id);return 0==n&&(n=e.type-t.type),n}),e.staticPixelcon.sort(),e}function formatDataOutgoing(e){var t=JSON.parse(loadedJSONData),n={};if(e.staticMode!=t.staticMode&&(n.staticMode=e.staticMode),e.rpcClient!=t.rpcClient&&(n.rpcClient=e.rpcClient),e.brightness!=t.brightness&&(n.brightness=e.brightness),e.duration!=t.duration&&(n.duration=e.duration),JSON.stringify(e.sources)!=JSON.stringify(t.sources)&&(n.sources=e.sources),JSON.stringify(e.staticPixelcon)!=JSON.stringify(t.staticPixelcon)){n.staticPixelconData="";for(var a=0;a<e.staticPixelcon.length;a++)n.staticPixelconData+=hexToBase64(e.staticPixelcon[a])}return n}function formatDataIncoming(e){if(e.staticPixelcon=[],e.staticPixelconData){if(e.staticPixelconData.length%44==0)for(var t=0;t<e.staticPixelconData.length;t+=44)e.staticPixelcon.push(bas64ToHex(e.staticPixelconData.substring(t,t+44)));e.staticPixelconData=void 0}return e}function setData(e,t){if(e=sanitizeJSONData(e),loadedJSONData!=JSON.stringify(e)){var n=formatDataOutgoing(e);pageShade.show("savingBox",!1),savingBox.innerText="Saving...";var a=function(n){n?(savingBox.innerText="Saved!",setTimeout(pageShade.hide,2e3),loadedJSONData=JSON.stringify(e),t&&t("success")):(savingBox.innerText="ERROR",setTimeout(pageShade.hide,2e3),t&&t(null))};dataTestMode?setTimeout(function(){a(!0)},2e3):httpPOST("/setData",n,function(e){e?a(e):setTimeout(function(){httpPOST("/setData",n,a)},1e3)})}}function getData(e){loadingBox.innerText="Loading...",loadingBox.style.display="",topSection.style.display="none",bottomSection.style.display="none";var t=function(t){if(t){loadingBox.style.display="none",topSection.style.display="",bottomSection.style.display="";var n=JSON.parse(t);n=sanitizeJSONData(n=formatDataIncoming(n)),loadedJSONData=JSON.stringify(n),e&&e(n)}else loadingBox.innerText="ERROR",e&&e(null)};dataTestMode?setTimeout(function(){t(JSON.stringify({staticMode:!1,staticPixelconData:"mkmUmZSZmUmZmZmZkgmQKZzJnMmcx3zJnMAMyZzJrMk=mpmZmZmZkJmQBJCZmZmZmZSZmUmZQiSZmZiJmZmYiZk=OxMxMzEzMxMzAzAzMwMwMzMxMzMzswMzMzMTMzMzMzM=joiIiIIogiiIAiCIiAiAiIiIiIiI536Ignd3KIiO6Ig=mpmZmZkJkJmZCZCZmZmZmZB3dwmUAABJmUd0mZmaqZk=mpmZmZmZmZmUSZRJmZmZmZQAAEmQO7MJlLu7SZm7u5k=",sources:[{type:1,id:"2b564ff5ac6daff1c9cf28d6a53a2522c1265435"}],rpcClient:"mainnet.infura.io/v3/07d72fe8b8b74534a05d2091e108e26e",brightness:80,duration:30}))},1e3):httpGet("/getData",function(e){e?t(e):setTimeout(function(){httpGet("/getData",t)},1e3)})}
</script>
</body>
</HTML>
)=====";

#endif /* PAGE_CONFIG_HTML_H */
