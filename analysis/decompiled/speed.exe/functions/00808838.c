/* speed.exe 00808838 FUN_00808838; analysis pseudocode, not buildable source.
 * calls 008012bb FUN_008012bb
 * calls 0080112a FUN_0080112a
 */

void FUN_00808838(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (param_4 = param_4 + -1, -1 < param_4) {
    puVar1 = (uint *)(param_2 + uVar2 * 0xc);
    uVar2 = param_3 >> ((byte)param_4 & 0x1f) & 1;
    if (*(int *)(param_1 + 0x18) == 0) {
      FUN_0080112a(param_1,uVar2,(char)puVar1[2]);
    }
    else {
      FUN_008012bb();
    }
    if (uVar2 == 0) {
      uVar2 = *puVar1;
    }
    else {
      uVar2 = puVar1[1];
    }
    uVar2 = uVar2 >> 1 & 0x7f;
  }
  return;
}

