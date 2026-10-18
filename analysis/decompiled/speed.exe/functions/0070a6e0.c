/* speed.exe 0070a6e0 FUN_0070a6e0; analysis pseudocode, not buildable source.
 * calls 00708390 FUN_00708390
 */

void FUN_0070a6e0(float param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_00993cc8;
  if (((0 < *(short *)(DAT_00993cc8 + 0x148)) &&
      (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x84) <= param_1)) &&
     (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x3c) <= param_2)) {
    piVar2 = (int *)FUN_00708390(1,1);
    if (piVar2 != (int *)0x0) {
      uVar3 = 2;
      if (*(float *)(iVar1 + 0x108) < *(float *)(*(int *)(iVar1 + 0x184) + 0x70)) {
        uVar3 = 1;
      }
      (**(code **)(*piVar2 + 0x18c))(uVar3);
    }
  }
  return;
}

