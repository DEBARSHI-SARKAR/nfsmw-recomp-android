/* speed.exe 005af890 FUN_005af890; analysis pseudocode, not buildable source.
 */

void FUN_005af890(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar1[-4] = 0xffffffff;
      puVar1[-3] = 0x3f800000;
      puVar1[-2] = 0x3f800000;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0x3f800000;
      puVar1[7] = 0x3f800000;
      puVar1[3] = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

