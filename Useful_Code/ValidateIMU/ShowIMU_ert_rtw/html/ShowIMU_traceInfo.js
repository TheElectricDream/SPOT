function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ShowIMU"};
	this.sidHashMap["ShowIMU"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/LSM9DS1 IMU Sensor"] = {sid: "ShowIMU:49"};
	this.sidHashMap["ShowIMU:49"] = {rtwname: "<Root>/LSM9DS1 IMU Sensor"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "ShowIMU:50"};
	this.sidHashMap["ShowIMU:50"] = {rtwname: "<Root>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
