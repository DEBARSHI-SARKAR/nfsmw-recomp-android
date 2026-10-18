/* speed.exe 007132a0 FUN_007132a0; analysis pseudocode, not buildable source.
 * calls 007131c0 FUN_007131c0
 * calls 00708390 FUN_00708390
 */

void __fastcall FUN_007132a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x24) & 0x40000) == 0) && ((*(uint *)(iVar1 + 0x24) & 0x88) == 0)) {
      *(undefined4 *)(iVar1 + 0x14) = DAT_00925ae8;
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x40000;
    }
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x90;
  }
  piVar2 = (int *)FUN_00708390(1,1);
  if ((*(int *)(param_1 + 0x204) != 0) && (piVar2 != (int *)0x0)) {
    uVar4 = 0x3f800000;
    uVar3 = (**(code **)(*piVar2 + 0x30))(0x3f800000);
    FUN_007131c0(0xe,uVar3,uVar4);
  }
  return;
}

