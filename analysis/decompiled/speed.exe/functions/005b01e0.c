/* speed.exe 005b01e0 FUN_005b01e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b01e0(int *param_1,short *param_2,int param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (((int)*param_2 == *param_1) && ((int)param_2[1] == param_1[1])) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1d) = uVar2;
  *param_1 = (int)*param_2;
  param_1[1] = (int)param_2[1];
  param_1[2] = (int)param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)param_1 + 0xe);
  uVar1 = param_2[3];
  *(ushort *)((int)param_1 + 0xe) = uVar1;
  if ((uVar1 & 1) != 0) {
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      param_1[4] = 0;
    }
    else {
      param_1[4] = param_1[4] + param_3;
    }
  }
  if ((*(byte *)((int)param_1 + 0xe) & 2) != 0) {
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = param_1[5] + param_3;
    }
  }
  if ((*(byte *)((int)param_1 + 0xe) & 4) != 0) {
    if ((*(byte *)(param_1 + 3) & 4) != 0) {
      param_1[6] = param_1[6] + param_3;
      return;
    }
    param_1[6] = 0;
  }
  return;
}

