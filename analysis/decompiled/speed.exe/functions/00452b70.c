/* speed.exe 00452b70 FUN_00452b70; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00452b70(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[3] = 0;
  if ((param_4 != 0) && (bVar1 = *(byte *)(param_4 + 0xb), (bVar1 & 2) == 0)) {
    if ((bVar1 & 0x20) == 0) {
      if ((bVar1 & 0x10) == 0) {
        param_4 = *(int *)(param_4 + 4);
      }
      else {
        param_4 = *(int *)(param_2 + 8) + *(int *)(param_4 + 4);
      }
    }
    else {
      param_4 = param_4 + 4;
    }
    param_1[3] = param_4;
  }
  if (param_2 != 0) {
    *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
  }
  return;
}

