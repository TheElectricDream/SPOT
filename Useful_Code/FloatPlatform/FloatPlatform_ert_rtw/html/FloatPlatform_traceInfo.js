function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "FloatPlatform"};
	this.sidHashMap["FloatPlatform"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "FloatPlatform:47"};
	this.sidHashMap["FloatPlatform:47"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "FloatPlatform:48"};
	this.sidHashMap["FloatPlatform:48"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/GPIO Write"] = {sid: "FloatPlatform:47"};
	this.sidHashMap["FloatPlatform:47"] = {rtwname: "<Root>/GPIO Write"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "FloatPlatform:47:9"};
	this.sidHashMap["FloatPlatform:47:9"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Digital Write"] = {sid: "FloatPlatform:47:6"};
	this.sidHashMap["FloatPlatform:47:6"] = {rtwname: "<S1>/Digital Write"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
