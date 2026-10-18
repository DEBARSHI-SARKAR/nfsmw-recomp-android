/* speed.exe 00843dd0 FUN_00843dd0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083af60 FUN_0083af60
 * calls 0083b210 FUN_0083b210
 * calls 00842130 FUN_00842130
 */

void FUN_00843dd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1 + 0x210;
  puVar5 = param_2;
  for (iVar4 = 0x180; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_0083a670(iVar1,"TITLE",param_2,0x40,&DAT_00890978);
  FUN_0083b210(uVar2);
  uVar2 = FUN_0083a670(iVar1,&DAT_008c67fc,param_2 + 0x10,0x400,&DAT_00890978);
  FUN_0083b210(uVar2);
  uVar2 = FUN_0083a670(iVar1,"MESG-RGB",0);
  iVar4 = FUN_0083af60(uVar2);
  *(char *)(param_2 + 0x110) = (char)((uint)iVar4 >> 0x10);
  cVar3 = (char)((uint)iVar4 >> 0x18);
  *(char *)((int)param_2 + 0x443) = cVar3;
  *(char *)((int)param_2 + 0x441) = (char)((uint)iVar4 >> 8);
  *(char *)((int)param_2 + 0x442) = (char)iVar4;
  if ((iVar4 != 0) && (cVar3 == '\0')) {
    *(undefined1 *)((int)param_2 + 0x443) = 0xff;
  }
  uVar2 = FUN_0083a670(iVar1,"PROMO",param_2 + 0x13e,200,&DAT_00890978);
  FUN_0083b210(uVar2);
  uVar2 = FUN_0083a670(iVar1,"K-TITLE",param_2 + 0x170,0x40,&DAT_00890978);
  FUN_0083b210(uVar2);
  FUN_00842130(param_1,param_2 + 0x111,1);
  FUN_00842130(param_1,(int)param_2 + 0x471,2);
  FUN_00842130(param_1,(int)param_2 + 0x49e,3);
  FUN_00842130(param_1,(int)param_2 + 0x4cb,4);
  return;
}

