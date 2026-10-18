/* speed.exe 00831714 FUN_00831714; analysis pseudocode, not buildable source.
 * calls 00830fba FUN_00830fba
 * calls 008313f3 FUN_008313f3
 * calls 00830f0b FUN_00830f0b
 */

int FUN_00831714(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_3 = 0;
  iVar1 = FUN_008313f3(param_1,0);
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)FUN_00830fba(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = -1;
    }
    else {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = 1;
      param_1 = (undefined4 *)*param_1;
      *puVar2 = param_1;
      for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
          param_1 = (undefined4 *)*param_1) {
        (*(code *)param_1[2])(puVar2,param_2,param_1[3]);
      }
      FUN_00830f0b(param_2);
      *param_3 = puVar2;
      iVar1 = 0;
    }
  }
  return iVar1;
}

