/* speed.exe 006539d0 FUN_006539d0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_006539d0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (iVar1 != param_1 + 0x14)) {
    FUN_005d0370(iVar1,(uint)*(byte *)(param_1 + 5) << 2,"Average::pData");
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(char *)(param_1 + 5) = (char)param_2;
  *(int *)(param_1 + 0x10) = param_1 + 0x14;
  if (5 < (int)param_2) {
    uVar2 = FUN_005d29d0((param_2 & 0xff) << 2,"Average::pData");
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

