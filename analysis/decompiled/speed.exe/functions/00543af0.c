/* speed.exe 00543af0 FUN_00543af0; analysis pseudocode, not buildable source.
 * calls 00543920 FUN_00543920
 * calls 00515e90 FUN_00515e90
 */

void __thiscall FUN_00543af0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_4 == 0) {
    if (param_3 == 0) {
      if (param_2 != 0) {
        *(undefined4 *)(param_1 + 0x70) = 1;
        FUN_00543920(0,0,0);
        FUN_00543920(1,1,param_2);
        FUN_00543920(2,0,0);
        iVar1 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x70) = 2;
      FUN_00543920(0,1,param_2);
      FUN_00543920(1,1,param_3);
      FUN_00543920(2,0,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 3;
    FUN_00543920(0,1,param_2);
    FUN_00543920(1,1,param_3);
    FUN_00543920(2,1,param_4);
  }
  FUN_00515e90(*(undefined4 *)(param_1 + 0x10),(&DAT_0089a644)[iVar1]);
  *(undefined1 *)(param_1 + 0x68) = 1;
  DAT_0091cbcc = DAT_0091cbac & 0xf000000;
  DAT_0091cbac = DAT_0091cbac & 0xf0ffffff;
  return;
}

