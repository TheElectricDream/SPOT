function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ShowIMU_RED"};
	this.sidHashMap["ShowIMU_RED"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "ShowIMU_RED:73"};
	this.sidHashMap["ShowIMU_RED:73"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Discrete Varying Lowpass"] = {sid: "ShowIMU_RED:72"};
	this.sidHashMap["ShowIMU_RED:72"] = {rtwname: "<Root>/Discrete Varying Lowpass"};
	this.rtwnameHashMap["<Root>/Discrete Varying Lowpass1"] = {sid: "ShowIMU_RED:74"};
	this.sidHashMap["ShowIMU_RED:74"] = {rtwname: "<Root>/Discrete Varying Lowpass1"};
	this.rtwnameHashMap["<Root>/Discrete Varying Lowpass2"] = {sid: "ShowIMU_RED:76"};
	this.sidHashMap["ShowIMU_RED:76"] = {rtwname: "<Root>/Discrete Varying Lowpass2"};
	this.rtwnameHashMap["<Root>/LSM9DS1 IMU Sensor"] = {sid: "ShowIMU_RED:49"};
	this.sidHashMap["ShowIMU_RED:49"] = {rtwname: "<Root>/LSM9DS1 IMU Sensor"};
	this.rtwnameHashMap["<Root>/Mux"] = {sid: "ShowIMU_RED:52"};
	this.sidHashMap["ShowIMU_RED:52"] = {rtwname: "<Root>/Mux"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "ShowIMU_RED:91"};
	this.sidHashMap["ShowIMU_RED:91"] = {rtwname: "<Root>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
