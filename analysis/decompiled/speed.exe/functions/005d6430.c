/* speed.exe 005d6430 FUN_005d6430; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005d5470 FUN_005d5470
 */

undefined4 * __fastcall FUN_005d6430(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (((DAT_0091dd99 == '\0') || (DAT_0091ddb0 == 0)) || (DAT_0091ddb4 - DAT_0091ddb0 >> 2 == 0)) {
    puVar2 = _malloc(0x1000);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 1;
      puVar2[1] = 0;
      *param_1 = puVar2;
      return param_1;
    }
    *param_1 = 0;
  }
  else {
    piVar1 = *(int **)(DAT_0091ddb4 + -4);
    *piVar1 = *piVar1 + 1;
    *param_1 = piVar1;
    if ((DAT_0091ddb0 != 0) && (DAT_0091ddb4 - DAT_0091ddb0 >> 2 != 0)) {
      FUN_005d5470(DAT_0091ddb4 + -4,DAT_0091ddb4,&DAT_0091ddac,param_1);
      DAT_0091ddb4 = DAT_0091ddb4 + -4;
      return param_1;
    }
  }
  return param_1;
}

