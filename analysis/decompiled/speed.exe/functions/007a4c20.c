/* speed.exe 007a4c20 FUN_007a4c20; analysis pseudocode, not buildable source.
 * calls 0056f210 FUN_0056f210
 * calls 0056f100 FUN_0056f100
 * calls 007a4bc0 FUN_007a4bc0
 */

void __thiscall FUN_007a4c20(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
  if (param_3 == 7) {
    uVar3 = 1 << ((byte)param_2 & 0x1f);
    *(uint *)(iVar2 + 0x134) = *(uint *)(iVar2 + 0x134) | uVar3;
    cVar1 = FUN_0056f210(param_1 + 8);
    if (cVar1 != '\0') goto LAB_007a4cb6;
    *(uint *)(iVar2 + 0x134) = *(uint *)(iVar2 + 0x134) & ~uVar3;
  }
  else {
    *(int *)(iVar2 + 0x118 + param_2 * 4) = param_3;
    cVar1 = FUN_0056f210(param_1 + 8);
    if (cVar1 != '\0') goto LAB_007a4cb6;
    *(undefined4 *)(iVar2 + 0x118 + param_2 * 4) = 0;
  }
  FUN_0056f210(param_1 + 8);
LAB_007a4cb6:
  FUN_007a4bc0(param_2,param_3);
  return;
}

