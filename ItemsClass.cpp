class Item {
private: 
	string name;
	float cost, sValue, xPos, yPos;
public:
	string getName();
	float getCost();
	float getS_Value();
	float getX_Pos();
	float getY_Pos();
	void setName();
	void setCost();
	void setS_Value();
	void setX_Pos();
	void setY_Pos();
};
//definitions
string Item::getName(){
	return name;
}
float Item::getCost(){
	return cost;
}
float Item::getS_Value(){
	return sValue;
}
float Item::getX_Pos(){
	return xPos;
}
float Item::getY_Pos(){
	return yPos;
}
void Item::setName(string iName){
	name = iName;
	return;
}
void Item::setCost(float iCost){
	cost = iCost;
	return;
}
void Item::setS_Value(float iS_Value){
	sValue = iS_Value;
	return;
}
void Item::setX_Pos(float iX_Pos){
	xPos = iX_Pos;
	return;
}
void Item::setY_Pos(float iY_Pos){
	yPos = setY_Pos;
	return;
}