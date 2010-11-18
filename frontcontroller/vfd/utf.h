unsigned char *UTF_Char_Table=NULL;
unsigned char UTF_C2[64] =
{
        0x10,//0x40,@      0x80 
        0x10,//0x41,A 
        0x10,//0x42,B 
        0x10,//0x43,C 
        0x10,//0x44,D   Ä
        0x10,//0x45,E 
        0x10,//0x46,F 
        0x10,//0x47,G 
        0x10,//0x48,H 
        0x10,//0x49,I 
        0x10,//0x4a,J 
        0x10,//0x4b,K 
        0x10,//0x4c,L
        0x10,//0x4d,M 
        0x10,//0x4e,N 
        0x10,//0x4f,O _

        0x10,//0x50,P      0x90
        0x10,//0x51,Q  
        0x10,//0x52,R  
        0x10,//0x53,S  
        0x10,//0x54,T  
        0x10,//0x55,U   õ
        0x10,//0x56,V   Ö
        0x10,//0x57,W  
        0x10,//0x58,X  
        0x10,//0x59,Y
        0x10,//0x5a,Z
        0x10,//0x5b,[  
        0x10,//0x5c,l   Ü
        0x10,//0x5d,]  
        0x10,//0x5e,^  
        0x10,//0x5f,  

        0x10,//0x60,`      0xA0
        0xad,//0x61,a  
        0x9b,//0x62,b  r
        0x9c,//0x63,c  
        0x64,//0x64,d  t
        0x9d,//0x65,e  
        0x7c,//0x66,f  
        0x67,//0x67,g  
        0x68,//0x68,h  
        0x69,//0x69,  
        0xa6,//0x6a,  
        0xae,//0x6b,k  
        0xaa,//0x6c,  |
        0x10,//0x6d,m  
        0x6e,//0x6e,n  
        0x6f,//0x6f, o 

        0x70,//0x70,p      0xB0
        0x71,//0x71,q  
        0x72,//0x72,  
        0x73,//0x73,s  
        0x74,//0x74,  
        0x93,//0x75,u    õ
        0x94,//0x76,v  
        0x77,//0x77,w  
        0x78,//0x78,x  
        0x79,//0x79,y  
        0xa7,//0x7a,z  
        0xaf,//0x7b,{  
        0xac,//0x7c,  
        0xab,//0x7d,}  
        0x7e,//0x7e,~  
        0xa8,//0x7f
};

unsigned char UTF_C3[64] =
{
        0x8f,//0x40,@      0x80 
        0x8f,//0x41,A 
        0x8f,//0x42,B 
        0x8e,//0x43,C 
        0x8e,//0x44,D   Ä
        0x8f,//0x45,E 
        0x92,//0x46,F 
        0x80,//0x47,G 
        0x90,//0x48,H 
        0x90,//0x49,I 
        0x90,//0x4a,J 
        0x90,//0x4b,K 
        0x8d,//0x4c,L
        0x8d,//0x4d,M 
        0x8c,//0x4e,N 
        0x8a,//0x4f,O _

        0x44,//0x50,P      0x90
        0xa5,//0x51,Q  
        0x95,//0x52,R  
        0xa2,//0x53,S  
        0x93,//0x54,T  
        0x93,//0x55,U   õ
        0x99,//0x56,V   Ö
        0x78,//0x57,W  
        0xb6,//0x58,X  
        0x97,//0x59,Y
        0xa3,//0x5a,Z
        0x96,//0x5b,[  
        0x9a,//0x5c,l   Ü
        0x98,//0x5d,]  
        0x5e,//0x5e,^  
        0x5f,//0x5f,  

        0x85,//0x60,`      0xA0
        0x86,//0x61,a  
        0x83,//0x62,b  r
        0x83,//0x63,c  
        0x84,//0x64,d  t
        0x83,//0x65,e  
        0x91,//0x66,f  
        0x87,//0x67,g  
        0x8a,//0x68,h  
        0x82,//0x69,  
        0x88,//0x6a,  
        0x86,//0x6b,k  
        0x8d,//0x6c,  |
        0xa1,//0x6d,m  
        0x8c,//0x6e,n  
        0x8b,//0x6f, o 

        0x93,//0x70,p      0xB0
        0xa4,//0x71,q  
        0x95,//0x72,  
        0xa2,//0x73,s    ó 
        0x93,//0x74,  
        0x93,//0x75,u    õ
        0x94,//0x76,v  
        0x77,//0x77,w  
        0x78,//0x78,x  
        0x97,//0x79,y  
        0xab,//0x7a,z  
        0x96,//0x7b,{  
        0x81,//0x7c,  
        0x79,//0x7d,}  
        0x70,//0x7e,~  
        0x98,//0x7f
};

unsigned char UTF_C4[64] =
{
        0x8f,//0x40,@      0x80 
        0x8f,//0x41,A 
        0x8f,//0x42,B 
        0x8f,//0x43,C 
        0x41,//0x44,D   polish accented A
        0x61,//0x45,E   polish accented a
        0x43,//0x46,F   polish accented C 
        0x63,//0x47,G   polish accented c 
        0x90,//0x48,H 
        0x90,//0x49,I 
        0x90,//0x4a,J 
        0x90,//0x4b,K 
        0x8d,//0x4c,L
        0x8d,//0x4d,M 
        0x8c,//0x4e,N 
        0x8a,//0x4f,O _

        0x44,//0x50,P      0x90
        0xa5,//0x51,Q  
        0x95,//0x52,R  
        0xa2,//0x53,S  
        0x93,//0x54,T  
        0x93,//0x55,U   õ
        0x99,//0x56,V   Ö
        0x78,//0x57,W  
        0x45,//0x58,X   polish accented E  
        0x65,//0x59,Y   polish accented e
        0xa3,//0x5a,Z
        0x96,//0x5b,[  
        0x9a,//0x5c,l   Ü
        0x98,//0x5d,]  
        0x5e,//0x5e,^  
        0x5f,//0x5f,  

        0x85,//0x60,`      0xA0
        0x86,//0x61,a  
        0x83,//0x62,b  r
        0x83,//0x63,c  
        0x84,//0x64,d  t
        0x83,//0x65,e  
        0x91,//0x66,f  
        0x87,//0x67,g  
        0x8a,//0x68,h  
        0x82,//0x69,  
        0x88,//0x6a,  
        0x86,//0x6b,k  
        0x8d,//0x6c,  |
        0xa1,//0x6d,m  
        0x8c,//0x6e,n  
        0x8b,//0x6f, o 

        0x93,//0x70,p      0xB0
        0xa4,//0x71,q  
        0x95,//0x72,  
        0xa2,//0x73,s  
        0x93,//0x74,  
        0x93,//0x75,u    õ
        0x94,//0x76,v  
        0x77,//0x77,w  
        0x78,//0x78,x  
        0x97,//0x79,y  
        0xab,//0x7a,z  
        0x96,//0x7b,{  
        0x81,//0x7c,  
        0x79,//0x7d,}  
        0x70,//0x7e,~  
        0x98,//0x7f
};

unsigned char UTF_C5[64] =
{
        0x8f,//0x40,@      0x80 
        0x4c,//0x41,A   polish accented L 
        0x6c,//0x42,B   polish accented l 
        0x4e,//0x43,C   polish accented N 
        0x6e,//0x44,D   polish accented n
        0x8f,//0x45,E 
        0x8f,//0x46,F 
        0x80,//0x47,G 
        0x90,//0x48,H 
        0x90,//0x49,I 
        0x90,//0x4a,J 
        0x90,//0x4b,K 
        0x8d,//0x4c,L
        0x8d,//0x4d,M 
        0x8c,//0x4e,N 
        0x8a,//0x4f,O _

        0x44,//0x50,P      0x90
        0xa5,//0x51,Q  
        0x95,//0x52,R  
        0xa2,//0x53,S  
        0x93,//0x54,T  
        0x73,//0x55,U   polish accented s
        0x99,//0x56,V   Ö
        0x78,//0x57,W  
        0xb6,//0x58,X  
        0x97,//0x59,Y
        0x53,//0x5a,Z   polish accented S
        0x96,//0x5b,[  
        0x9a,//0x5c,l   Ü
        0x98,//0x5d,]  
        0x5e,//0x5e,^  
        0x5f,//0x5f,  

        0x85,//0x60,`      0xA0
        0x86,//0x61,a  
        0x83,//0x62,b  r
        0x83,//0x63,c  
        0x84,//0x64,d  t
        0x83,//0x65,e  
        0x91,//0x66,f  
        0x87,//0x67,g  
        0x8a,//0x68,h  
        0x82,//0x69,  
        0x88,//0x6a,  
        0x86,//0x6b,k  
        0x8d,//0x6c,  |
        0xa1,//0x6d,m  
        0x8c,//0x6e,n  
        0x8b,//0x6f, o 

        0x93,//0x70,p      0xB0
        0xa4,//0x71,q  
        0x95,//0x72,  
        0xa2,//0x73,s  
        0x93,//0x74,  
        0x93,//0x75,u    õ
        0x94,//0x76,v  
        0x77,//0x77,w  
        0x78,//0x78,x  
        0x5a,//0x79,y   polish accented Zi  
        0x7a,//0x7a,z   polish accented zi 
        0x5a,//0x7b,{   polish accented Z  
        0x7a,//0x7c,   polish accented z  
        0x79,//0x7d,}  
        0x70,//0x7e,~  
        0x98,//0x7f
};

unsigned char UTF_D0[64] =
{
        0x40,//0x40,@      0x80 
        0x90,//0x41,A 
        0x42,//0x42,B 
        0x43,//0x43,C 
        0x8e,//0x44,D   Ä
        0x45,//0x45,E 
        0x46,//0x46,F 
        0x47,//0x47,G 
        0x48,//0x48,H 
        0x49,//0x49,I 
        0x4a,//0x4a,J 
        0x4b,//0x4b,K 
        0x4c,//0x4c,L
        0x4d,//0x4d,M 
        0x4e,//0x4e,N 
        0x4f,//0x4f,O _

        0x41,//0x50,P      0x90
        0xda,//0x51,Q  
        0x42,//0x52,R  
        0xdb,//0x53,S  
        0xdc,//0x54,T  
        0x45,//0x55,U   õ
        0xdd,//0x56,V   Ö
        0xde,//0x57,W  
        0xdf,//0x58,X  
        0xe0,//0x59,Y
        0x4b,//0x5a,Z
        0xe1,//0x5b,[  
        0x4d,//0x5c,l   Ü
        0x48,//0x5d,]  
        0x4f,//0x5e,^  
        0xe2,//0x5f,  

        0x50,//0x60,`      0xA0
        0x43,//0x61,a  
        0x54,//0x62,b  r
        0xe3,//0x63,c  
        0xe4,//0x64,d  t
        0x58,//0x65,e  
        0xe5,//0x66,f  
        0xe6,//0x67,g  
        0xe7,//0x68,h  
        0xe8,//0x69,  
        0xe9,//0x6a,  
        0xea,//0x6b,k  
        0xe9,//0x6c,  |
        0xeb,//0x6d,m  
        0xec,//0x6e,n  
        0xed,//0x6f, o 

        0x41,//0x70,p      0xB0
        0xda,//0x71,q  
        0x42,//0x72,  
        0xdb,//0x73,s  
        0xdc,//0x74,  
        0x45,//0x75,u    õ
        0xdd,//0x76,v  
        0xde,//0x77,w  
        0xdf,//0x78,x  
        0xe0,//0x79,y  
        0x4b,//0x7a,z  
        0xe1,//0x7b,{  
        0x4d,//0x7c,  
        0x48,//0x7d,}  
        0x4f,//0x7e,~  
        0xe2,//0x7f
};

unsigned char UTF_D1[64] =
{
        0x50,//0x40,@      0x80 
        0x43,//0x41,A 
        0x54,//0x42,B 
        0xe3,//0x43,C 
        0xe4,//0x44,D   Ä
        0x58,//0x45,E 
        0xe5,//0x46,F 
        0xe6,//0x47,G 
        0xe7,//0x48,H 
        0xe8,//0x49,I 
        0xe9,//0x4a,J 
        0xea,//0x4b,K 
        0xe9,//0x4c,L
        0xeb,//0x4d,M 
        0xec,//0x4e,N 
        0xed,//0x4f,O _

        0x8b,//0x50,P      0x90
        0x90,//0x51,Q  
        0x52,//0x52,R  
        0x53,//0x53,S  
        0x54,//0x54,T  
        0x93,//0x55,U   õ
        0x99,//0x56,V   Ö
        0x8b,//0x57,W  
        0xb6,//0x58,X  
        0x59,//0x59,Y
        0x5a,//0x5a,Z
        0x5b,//0x5b,[  
        0x9a,//0x5c,l   Ü
        0x5d,//0x5d,]  
        0x5e,//0x5e,^  
        0x5f,//0x5f,  

        0x60,//0x60,`      0xA0
        0x61,//0x61,a  
        0x62,//0x62,b  r
        0x63,//0x63,c  
        0x84,//0x64,d  t
        0x83,//0x65,e  
        0x66,//0x66,f  
        0x67,//0x67,g  
        0x68,//0x68,h  
        0x69,//0x69,  
        0x6a,//0x6a,  
        0x6b,//0x6b,k  
        0x6c,//0x6c,  |
        0x6d,//0x6d,m  
        0x6e,//0x6e,n  
        0x6f,//0x6f, o 

        0x70,//0x70,p      0xB0
        0x71,//0x71,q  
        0x72,//0x72,  
        0x73,//0x73,s  
        0x74,//0x74,  
        0x93,//0x75,u    õ
        0x94,//0x76,v  
        0x77,//0x77,w  
        0x78,//0x78,x  
        0x79,//0x79,y  
        0x7a,//0x7a,z  
        0x7b,//0x7b,{  
        0x81,//0x7c,  
        0x7d,//0x7d,}  
        0x7e,//0x7e,~  
        0x7f,//0x7f
};
