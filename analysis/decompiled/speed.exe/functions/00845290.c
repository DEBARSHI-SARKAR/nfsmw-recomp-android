/* speed.exe 00845290 FUN_00845290; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083af60 FUN_0083af60
 * calls 0083b210 FUN_0083b210
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 0083bbe0 FUN_0083bbe0
 * calls 0083abc0 FUN_0083abc0
 * calls 0083ffa0 FUN_0083ffa0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00845290(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char local_24 [32];
  undefined4 local_4;
  
  uVar2 = param_2;
  puVar1 = param_1;
  local_4 = DAT_00906980;
  puVar5 = param_1;
  for (iVar4 = 0x19d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = FUN_0083a670(param_2,"IDENT",0xffffffff);
  uVar3 = FUN_0083abc0(uVar3);
  *puVar1 = uVar3;
  uVar3 = FUN_0083a670(uVar2,&DAT_008b4cbc,puVar1 + 1,0x24,&DAT_00890978);
  FUN_0083b210(uVar3);
  uVar3 = FUN_0083a670(uVar2,&DAT_008c6d94,puVar1 + 10,0x10,&DAT_00890978);
  FUN_0083b210(uVar3);
  uVar3 = FUN_0083a670(uVar2,&DAT_008c681c,puVar1 + 0xe,0x10,&DAT_00890978);
  FUN_0083b210(uVar3);
  uVar3 = FUN_0083a670(uVar2,"PARAMS",puVar1 + 0x33,0x84,&DAT_00890978);
  FUN_0083b210(uVar3);
  uVar3 = FUN_0083a670(uVar2,"PLATPARAMS",puVar1 + 0x54,0x10,&DAT_00890978);
  FUN_0083b210(uVar3);
  uVar3 = FUN_0083a670(uVar2,&DAT_008c6d8c,0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x12] = uVar3;
  uVar3 = FUN_0083a670(uVar2,"CUSTFLAGS",0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x58] = uVar3;
  uVar3 = FUN_0083a670(uVar2,"SYSFLAGS",0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x59] = uVar3;
  uVar3 = FUN_0083a670(uVar2,"COUNT",0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x83] = uVar3;
  uVar3 = FUN_0083a670(uVar2,&DAT_0089e98c,0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x84] = uVar3;
  uVar3 = FUN_0083a670(uVar2,"MINSIZE",0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x5a] = uVar3;
  uVar3 = FUN_0083a670(uVar2,"MAXSIZE",0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x5b] = uVar3;
  uVar3 = FUN_0083a670(uVar2,"NUMPART",0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x6e] = uVar3;
  uVar3 = FUN_0083a670(uVar2,&DAT_008c6d7c,0);
  uVar3 = FUN_0083abc0(uVar3);
  puVar1[0x5c] = uVar3;
  uVar3 = FUN_0083a670(uVar2,&DAT_008b7084,0);
  uVar3 = FUN_0083bbe0(uVar3);
  puVar1[0x5d] = uVar3;
  uVar3 = FUN_0083a670(uVar2,&DAT_008b708c,puVar1 + 0x5e,0x40,&DAT_00890978);
  FUN_0083b210(uVar3);
  iVar4 = 0;
  if (0 < (int)puVar1[0x83]) {
    pcVar6 = (char *)(puVar1 + 0x8c);
    do {
      _sprintf(local_24,"OPID%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083abc0(uVar3);
      *(undefined4 *)(pcVar6 + -0x1c) = uVar3;
      _sprintf(local_24,"OPPO%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,pcVar6 + -0x18,0x10,&DAT_00890978);
      FUN_0083b210(uVar3);
      _sprintf(local_24,"ADDR%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083af60(uVar3);
      *(undefined4 *)(pcVar6 + -8) = uVar3;
      _sprintf(local_24,"LADDR%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083af60(uVar3);
      *(undefined4 *)(pcVar6 + -4) = uVar3;
      _sprintf(local_24,"MADDR%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,pcVar6,0x40,&DAT_00890978);
      FUN_0083b210(uVar3);
      param_1 = *(undefined4 **)(pcVar6 + -8);
      if ((*pcVar6 == '\0') && (param_1 != (undefined4 *)0x0)) {
        FUN_0083ffa0(pcVar6,&param_1);
      }
      _sprintf(local_24,"OPPART%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083abc0(uVar3);
      *(undefined4 *)(pcVar6 + 0x40) = uVar3;
      _sprintf(local_24,"OPPARAM%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,pcVar6 + 0x4c,0x24,&DAT_00890978);
      FUN_0083b210(uVar3);
      _sprintf(local_24,"OPFLAG%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083abc0(uVar3);
      *(undefined4 *)(pcVar6 + 0x44) = uVar3;
      _sprintf(local_24,"PRES%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083abc0(uVar3);
      *(undefined4 *)(pcVar6 + 0x48) = uVar3;
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x8c;
    } while (iVar4 < (int)puVar1[0x83]);
  }
  iVar4 = 0;
  if (0 < (int)puVar1[0x6e]) {
    puVar5 = puVar1 + 0x70;
    do {
      _sprintf(local_24,"PARTSIZE%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,0);
      uVar3 = FUN_0083abc0(uVar3);
      puVar5[-1] = uVar3;
      _sprintf(local_24,"PARTPARAMS%d",iVar4);
      uVar3 = FUN_0083a670(uVar2,local_24,puVar5,0x24,0);
      FUN_0083b210(uVar3);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 10;
    } while (iVar4 < (int)puVar1[0x6e]);
  }
  iVar4 = FUN_0083a670(uVar2,&DAT_008b7130);
  if (iVar4 != 0) {
    FUN_0083b210(iVar4,puVar1 + 0x13,0x80,&DAT_00890978);
    return;
  }
  _sprintf((char *)(puVar1 + 0x13),"%s-%s-%08x",puVar1 + 0x86,puVar1 + 0xa9,puVar1[0x5d]);
  return;
}

