/* speed.exe 006f0040 FUN_006f0040; analysis pseudocode, not buildable source.
 */

code * FUN_006f0040(int param_1,code *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(&DAT_0092d84c)[param_1 * 0xc];
  puVar1 = puVar2 + (&DAT_0092d854)[param_1 * 0xc];
  if (puVar2 == puVar1) {
    return param_2;
  }
  do {
    (*param_2)(*puVar2);
    puVar2 = puVar2 + 1;
  } while (puVar2 != puVar1);
  return param_2;
}

