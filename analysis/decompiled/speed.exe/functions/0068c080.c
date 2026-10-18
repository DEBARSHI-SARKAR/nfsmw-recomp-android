/* speed.exe 0068c080 FUN_0068c080; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

uint __fastcall FUN_0068c080(int param_1)

{
  uint uVar1;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [8];
  undefined1 local_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [68];
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),*(char *)(param_1 + 0x1c)),
     *(char *)(param_1 + 0x1c) != '\0')) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(*(int *)(param_1 + -0x14c) + 0x34))(local_4c);
    (**(code **)(*(int *)(param_1 + -0x14c) + 0x40))(auStack_44);
    FUN_00401670(&stack0xffffff94,auStack_48,auStack_60);
    (**(code **)(*(int *)(param_1 + -0x14c) + 0x20))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x68))(&stack0xffffff94,auStack_54);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

