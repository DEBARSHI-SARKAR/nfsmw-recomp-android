/* speed.exe 008436e0 FUN_008436e0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083af60 FUN_0083af60
 * calls 0083b210 FUN_0083b210
 * calls 00842130 FUN_00842130
 */

void FUN_008436e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2;
  for (iVar3 = 0x11c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = param_1 + 0x210;
  *(undefined1 *)puVar4 = 0;
  uVar1 = FUN_0083a670(iVar3,"TITLE",param_2,0x40,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar3,&DAT_008c67fc,param_2 + 0x10,0x400,"PLEASE WAIT");
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(iVar3,"MESG-RGB",0);
  iVar3 = FUN_0083af60(uVar1);
  *(char *)(param_2 + 0x110) = (char)((uint)iVar3 >> 0x10);
  cVar2 = (char)((uint)iVar3 >> 0x18);
  *(char *)((int)param_2 + 0x443) = cVar2;
  *(char *)((int)param_2 + 0x441) = (char)((uint)iVar3 >> 8);
  *(char *)((int)param_2 + 0x442) = (char)iVar3;
  if ((iVar3 != 0) && (cVar2 == '\0')) {
    *(undefined1 *)((int)param_2 + 0x443) = 0xff;
  }
  FUN_00842130(param_1,param_2 + 0x111,1);
  return;
}

