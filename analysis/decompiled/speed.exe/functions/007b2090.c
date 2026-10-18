/* speed.exe 007b2090 FUN_007b2090; analysis pseudocode, not buildable source.
 * calls 00524cc0 FUN_00524cc0
 * calls 00514d10 FUN_00514d10
 * calls 00514fd0 FUN_00514fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007b2090(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar1 = param_1[0x71];
  if (param_2 == -NAN) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + 4;
    }
    piVar3 = *(int **)(iVar2 + 4);
    if (piVar3 == param_1 + 0x6f) {
      piVar3 = (int *)param_1[0x70];
    }
    if (piVar3 == (int *)0x0) {
LAB_007b20f2:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar3 + -1;
    }
  }
  else {
    if (param_2 != 1.4013e-45) goto LAB_007b20fa;
    if (iVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(iVar1 + 4);
    }
    piVar3 = (int *)*piVar3;
    if (piVar3 == param_1 + 0x6f) {
      piVar3 = (int *)param_1[0x6f];
    }
    if (piVar3 == (int *)0x0) goto LAB_007b20f2;
    piVar3 = piVar3 + -1;
  }
  param_1[0x71] = (int)piVar3;
LAB_007b20fa:
  if (param_1[0x71] != iVar1) {
    *(undefined4 *)(param_1[0xe] + 0x60) = *(undefined4 *)(param_1[0x71] + 0x4c);
    FUN_00514d10(*(undefined4 *)(iVar1 + 0x10),0x7ab5521a,1);
    FUN_00514d10(*(undefined4 *)(param_1[0x71] + 0x10),0x249db7b7,1);
    FUN_00514fd0(*(undefined4 *)(param_1[0x71] + 0x10),local_8,&param_2);
    FUN_00514fd0(*(undefined4 *)(param_1[0x71] + 0x10),&local_c,local_4);
    FUN_00524cc0(param_1[0x72],local_c + _DAT_008b7a74,param_2 + _DAT_008b7a78);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

