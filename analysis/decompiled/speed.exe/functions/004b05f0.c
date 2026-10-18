/* speed.exe 004b05f0 FUN_004b05f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004b05f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = 0;
  param_1 = param_1 + 0x30;
  iVar3 = 3;
  iVar4 = 0;
  iVar6 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar5 = param_1;
    iVar7 = iVar6;
    if (((iVar1 != 0) && (iVar5 = iVar4, iVar7 = param_1, iVar1 != 1)) &&
       (iVar7 = iVar6, iVar1 == 2)) {
      iVar2 = param_1;
    }
    param_1 = param_1 + 0x18;
    iVar3 = iVar3 + -1;
    iVar4 = iVar5;
    iVar6 = iVar7;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar5 + 0xc) = 2;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 1;
  *(bool *)(iVar2 + 0x14) = *(char *)(iVar2 + 0x14) == '\0';
  return;
}

