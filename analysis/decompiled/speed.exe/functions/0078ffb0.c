/* speed.exe 0078ffb0 FUN_0078ffb0; analysis pseudocode, not buildable source.
 * calls 00652af0 FUN_00652af0
 */

undefined4 __thiscall FUN_0078ffb0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if ((-1 < param_2) && (param_2 < 6)) {
    if (param_3 == 0) {
      return 0xffffffff;
    }
    puVar1 = (undefined4 *)(param_1 + param_2 * 8);
    puVar2 = (undefined4 *)*puVar1;
    while( true ) {
      if (puVar2 == puVar1) {
        piVar3 = (int *)FUN_00652af0(0x10,8);
        if (piVar3 != (int *)0x0) {
          piVar3[2] = param_3;
          piVar3[3] = param_4;
          puVar2 = (undefined4 *)puVar1[1];
          *puVar2 = piVar3;
          puVar1[1] = piVar3;
          piVar3[1] = (int)puVar2;
          *piVar3 = (int)puVar1;
          return 0;
        }
        return 0xffffffff;
      }
      if ((puVar2[2] == param_3) && (puVar2[3] == param_4)) break;
      puVar2 = (undefined4 *)*puVar2;
    }
    return 0;
  }
  return 0xffffffff;
}

