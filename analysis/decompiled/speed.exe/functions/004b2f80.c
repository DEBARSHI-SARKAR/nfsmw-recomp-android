/* speed.exe 004b2f80 FUN_004b2f80; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004b2a30 FUN_004b2a30
 * calls 004b2650 FUN_004b2650
 * calls 004b26b0 FUN_004b26b0
 */

undefined4 FUN_004b2f80(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    puVar3 = (undefined4 *)FUN_004b2650();
    if (puVar3 != (undefined4 *)0x0) {
      if (param_3 == 0) {
        param_3 = 0;
        iVar2 = *param_2;
        piVar4 = param_2;
        while (iVar2 != param_4) {
          piVar1 = piVar4 + 1;
          piVar4 = (int *)((int)piVar4 + *piVar1);
          param_3 = param_3 + *piVar1;
          iVar2 = *piVar4;
        }
        param_3 = param_3 + piVar4[1];
      }
      puVar3[4] = 1;
      puVar3[0x46] = param_2;
      puVar3[0x47] = param_3;
      puVar3[0x48] = param_4;
      FUN_004b26b0();
      FUN_007ec1bd();
      iVar2 = param_1[0x11];
      if (iVar2 == 0) {
        param_1[0x11] = 1;
      }
      FUN_007ec1c8();
      if (iVar2 == 0) {
        FUN_004b2a30(param_1,0);
      }
      return *puVar3;
    }
    return 0;
  }
  return 0;
}

