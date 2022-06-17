if((x>=1)&&(x<=31)){
	ans[y][1]=x;
	ans[y][2]=1;//jan 1
}else if((x>=32)&&(x<=60)){
	ans[y][1]=x-31;
	ans[y][2]=2;//feb 1
}else if((x>=61)&&(x<=91)){
	ans[y][1]=x-60;
	ans[y][2]=3;//mar 1
}else if((x>=92)&&(x<=121)){
	ans[y][1]=x-91;
	ans[y][2]=4;//apr 1
}else if((x>=122)&&(x<=152)){
	ans[y][1]=x-121;
	ans[y][2]=5;//may 1
}else if((x>=153)&&(x<=182)){
	ans[y][1]=x-152;
	ans[y][2]=6;//jun 1
}else if((x>=183)&&(x<=213)){
	ans[y][1]=x-182;
	ans[y][2]=7;//jul 1
}else if((x>=214)&&(x<=244)){
	ans[y][1]=x-213;
	ans[y][2]=8;//aug 1
}else if((x>=245)&&(x<=274)){
	ans[y][1]=x-244;
	ans[y][2]=9;//sep 1
}else if((x>=275)&&(x<=305)){
	ans[y][1]=x-274;
	ans[y][2]=10;//oct 1
}else if((x>=306)&&(x<=335)){
	ans[y][1]=x-305;
	ans[y][2]=11;//nov 1
}else if((x>=336)&&(x<=366)){
	ans[y][1]=x-335;
	ans[y][2]=12;//dec 1
}else if((x>=367)&&(x<=397)){
	ans[y][1]=x-366;
	ans[y][2]=1;//jan 2
	ans[y][3]+=1;
}else if((x>=398)&&(x<=425)){
	ans[y][1]=x-397;
	ans[y][2]=2;//feb 2
	ans[y][3]+=1;
}else if((x>=426)&&(x<=456)){
	ans[y][1]=x-425;
	ans[y][2]=3;//mar 2
	ans[y][3]+=1;
}else if((x>=457)&&(x<=486)){
	ans[y][1]=x-456;
	ans[y][2]=4;//apr 2
	ans[y][3]+=1;
}else if((x>=487)&&(x<=517)){
	ans[y][1]=x-486;
	ans[y][2]=5;//may 2
	ans[y][3]+=1;
}else if((x>=518)&&(x<=547)){
	ans[y][1]=x-517;
	ans[y][2]=6;//jun 2
	ans[y][3]+=1;
}else if((x>=548)&&(x<=578)){
	ans[y][1]=x-547;
	ans[y][2]=7;//jul 2
	ans[y][3]+=1;
}else if((x>=579)&&(x<=609)){
	ans[y][1]=x-578;
	ans[y][2]=8;//aug 2
	ans[y][3]+=1;
}else if((x>=610)&&(x<=639)){
	ans[y][1]=x-609;
	ans[y][2]=9;//sep 2
	ans[y][3]+=1;
}else if((x>=640)&&(x<=670)){
	ans[y][1]=x-639;
	ans[y][2]=10;//oct 2
	ans[y][3]+=1;
}else if((x>=671)&&(x<=700)){
	ans[y][1]=x-670;
	ans[y][2]=11;//nov 2
	ans[y][3]+=1;
}else if((x>=701)&&(x<=731)){
	ans[y][1]=x-700;
	ans[y][2]=12;//dec 2
	ans[y][3]+=1;
}else if((x>=732)&&(x<=762)){
	ans[y][1]=x-731;
	ans[y][2]=1;//jan 3
	ans[y][3]+=2;
}else if((x>=763)&&(x<=790)){
	ans[y][1]=x-762;
	ans[y][2]=2;//feb 3
	ans[y][3]+=2;
}else if((x>=791)&&(x<=821)){
	ans[y][1]=x-790;
	ans[y][2]=3;//mar 3
	ans[y][3]+=2;
}else if((x>=822)&&(x<=851)){
	ans[y][1]=x-821;
	ans[y][2]=4;//apr 3
	ans[y][3]+=2;
}else if((x>=852)&&(x<=882)){
	ans[y][1]=x-851;
	ans[y][2]=5;//may 3
	ans[y][3]+=2;
}else if((x>=883)&&(x<=912)){
	ans[y][1]=x-882;
	ans[y][2]=6;//jun 3
	ans[y][3]+=2;
}else if((x>=913)&&(x<=943)){
	ans[y][1]=x-912;
	ans[y][2]=7;//jul 3
	ans[y][3]+=2;
}else if((x>=944)&&(x<=974)){
	ans[y][1]=x-943;
	ans[y][2]=8;//aug 3
	ans[y][3]+=2;
}else if((x>=975)&&(x<=1004)){
	ans[y][1]=x-974;
	ans[y][2]=9;//sep 3
	ans[y][3]+=2;
}else if((x>=1005)&&(x<=1035)){
	ans[y][1]=x-1004;
	ans[y][2]=10;//oct 3  
	ans[y][3]+=2;
}else if((x>=1036)&&(x<=1065)){
	ans[y][1]=x-1035;
	ans[y][2]=11;//nov 3
	ans[y][3]+=2;
}else if((x>=1066)&&(x<=1096)){
	ans[y][1]=x-1065;
	ans[y][2]=12;//dec 3
	ans[y][3]+=2;
}else if((x>=1097)&&(x<=1127)){
	ans[y][1]=x-1096;
	ans[y][2]=1;//jan 4
	ans[y][3]+=3;
}else if((x>=1128)&&(x<=1155)){
	ans[y][1]=x-1127;
	ans[y][2]=2;//feb 4
	ans[y][3]+=3;
}else if((x>=1156)&&(x<=1186)){
	ans[y][1]=x-1155;
	ans[y][2]=3;//mar 4
	ans[y][3]+=3;
}else if((x>=1187)&&(x<=1216)){
	ans[y][1]=x-1186;
	ans[y][2]=4;//apr 4
	ans[y][3]+=3;
}else if((x>=1217)&&(x<=1247)){
	ans[y][1]=x-1216;
	ans[y][2]=5;//may 4
	ans[y][3]+=3;
}else if((x>=1248)&&(x<=1277)){
	ans[y][1]=x-1247;
	ans[y][2]=6;//jun 4
	ans[y][3]+=3;
}else if((x>=1278)&&(x<=1308)){
	ans[y][1]=x-1277;
	ans[y][2]=7;//jul 4
	ans[y][3]+=3;
}else if((x>=1309)&&(x<=1339)){
	ans[y][1]=x-1308;
	ans[y][2]=8;//aug 4
	ans[y][3]+=3;
}else if((x>=1340)&&(x<=1369)){
	ans[y][1]=x-1339;
	ans[y][2]=9;//sep 4
	ans[y][3]+=3;
}else if((x>=1370)&&(x<=1400)){
	ans[y][1]=x-1369;
	ans[y][2]=10;//oct 4
	ans[y][3]+=3;
}else if((x>=1401)&&(x<=1430)){
	ans[y][1]=x-1400;
	ans[y][2]=11;//nov 4
	ans[y][3]+=3;
}else if((x>=1431)&&(x<=1461)){
	ans[y][1]=x-1430;
	ans[y][2]=12;//dec 4
	ans[y][3]+=3;
}
