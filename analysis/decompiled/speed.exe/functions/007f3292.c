/* speed.exe 007f3292 FUN_007f3292; analysis pseudocode, not buildable source.
 * calls 007f0fe0 FUN_007f0fe0
 * calls 007f0e0f FUN_007f0e0f
 */

undefined4 __thiscall FUN_007f3292(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_248 [10];
  undefined1 local_220 [260];
  undefined1 local_11c [280];
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x464) + 0xb4);
  puVar1 = (undefined4 *)(param_1 + 0x468);
  iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2 + 4,puVar1,0);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x218) = *puVar1;
    FUN_007f0fe0(local_248,0,0x244);
    local_248[0] = 0x244;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,local_248);
    if (iVar3 == 0) {
      FUN_007f0e0f(param_1 + 0x10,local_220,0x103);
      FUN_007f0e0f(param_1 + 0x114,local_11c,0x103);
    }
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1,param_3);
    if ((iVar3 == 0) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 0x464) + 8), iVar3 == 0 ||
        (iVar3 = (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,iVar3,5), iVar3 == 0)))) {
      return *puVar1;
    }
  }
  return 0;
}

