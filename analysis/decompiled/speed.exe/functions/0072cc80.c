/* speed.exe 0072cc80 FUN_0072cc80; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 */

undefined4 FUN_0072cc80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = DAT_009a3b30, param_2 != 0)) {
    for (; (undefined4 **)puVar2 != &DAT_009a3b30; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[2] == param_1) {
        puVar2[4] = puVar2[4] + 1;
        return 1;
      }
    }
    puVar2 = (undefined4 *)FUN_00466340(DAT_009a3ac8);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = param_1;
      puVar2[3] = param_2;
      puVar2[4] = 1;
      *DAT_009a3b34 = puVar2;
      puVar1 = puVar2;
      puVar2[1] = DAT_009a3b34;
      DAT_009a3b34 = puVar1;
      *puVar2 = &DAT_009a3b30;
      DAT_009a2dcc = DAT_009a2dcc + 1;
      if (DAT_009a2dd8 < DAT_009a2dcc) {
        DAT_009a2dd8 = DAT_009a2dcc;
      }
      return 1;
    }
  }
  return 0;
}

