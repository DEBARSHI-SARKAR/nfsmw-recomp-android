/* speed.exe 008438f0 FUN_008438f0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083af60 FUN_0083af60
 * calls 0083b210 FUN_0083b210
 * calls 00842130 FUN_00842130
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6380 _atoi
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008438f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar2 = param_1 + 0x210;
  puVar5 = param_2;
  for (iVar4 = 0x249; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar1 = FUN_0083a670(iVar2,"TITLE",param_2,0x40,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,&DAT_008c67fc,param_2 + 0x10,0x400,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"MESG-RGB",0);
  iVar4 = FUN_0083af60(uVar1);
  *(char *)(param_2 + 0x110) = (char)((uint)iVar4 >> 0x10);
  cVar3 = (char)((uint)iVar4 >> 0x18);
  *(char *)((int)param_2 + 0x443) = cVar3;
  *(char *)((int)param_2 + 0x441) = (char)((uint)iVar4 >> 8);
  *(char *)((int)param_2 + 0x442) = (char)iVar4;
  if ((iVar4 != 0) && (cVar3 == '\0')) {
    *(undefined1 *)((int)param_2 + 0x443) = 0xff;
  }
  uVar1 = FUN_0083a670(iVar2,"FIRSTNAME",param_2 + 0x13e,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"LASTNAME",param_2 + 0x157,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"NAMEONCARD",param_2 + 0x170,200,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"ADDRESS1",param_2 + 0x1a2,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"ADDRESS2",param_2 + 0x1bb,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,&DAT_008c6c64,param_2 + 0x1d4,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"STATE",param_2 + 0x1ed,0x28,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"POSTCODE",param_2 + 0x1f7,0x28,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"COUNTRY",param_2 + 0x202,0x32,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"EMAIL",(int)param_2 + 0x83a,100,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"CARDTYPE",param_2 + 0x229,0x50,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar2,"CARDNUMBER",param_2 + 0x23d,0x28,&DAT_00890978);
  FUN_0083b210(uVar1);
  iVar4 = FUN_0083a670(iVar2,"CARDLIST");
  param_2[0x228] = iVar4;
  if (iVar4 == 0) {
    param_2[0x228] = "UNKNOWN";
  }
  iVar4 = FUN_0083a670(iVar2,"COUNTRYLIST");
  param_2[0x201] = iVar4;
  if (iVar4 == 0) {
    param_2[0x201] = "UNKNOWN";
  }
  uVar1 = FUN_0083a670(iVar2,"EXPIRYMONTH",local_24,0x20,&DAT_008a04fc);
  FUN_0083b210(uVar1);
  iVar4 = _atoi(local_24);
  param_2[0x247] = iVar4;
  uVar1 = FUN_0083a670(iVar2,"EXPIRYYEAR",local_24,0x20,&DAT_008c6c04);
  FUN_0083b210(uVar1);
  iVar2 = _atoi(local_24);
  param_2[0x248] = iVar2;
  FUN_00842130(param_1,param_2 + 0x111,1);
  FUN_00842130(param_1,(int)param_2 + 0x471,2);
  FUN_00842130(param_1,(int)param_2 + 0x49e,3);
  FUN_00842130(param_1,(int)param_2 + 0x4cb,4);
  return;
}

