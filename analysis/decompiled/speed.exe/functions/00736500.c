/* speed.exe 00736500 FUN_00736500; analysis pseudocode, not buildable source.
 * calls 0065aed0 FUN_0065aed0
 * calls 0065af10 FUN_0065af10
 * calls 0065f680 FUN_0065f680
 */

void FUN_00736500(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = FUN_0065f680(param_1,6,1);
  if (iVar1 != 0) {
    FUN_0065af10(iVar1,"//\r\n// HotPosition - %s\r\n//\r\n\r\n",param_1);
    if (0 < param_3) {
      puVar2 = (undefined2 *)(param_2 + 0x10);
      do {
        FUN_0065af10(iVar1,"HOTPOSITION: %8.2f,%8.2f,%8.2f  Angle = 0x%04x  Speed = %.2f\r\n",
                     (double)*(float *)(puVar2 + -8),(double)*(float *)(puVar2 + -6),
                     (double)*(float *)(puVar2 + -4),*puVar2,(double)*(float *)(puVar2 + 2));
        puVar2 = puVar2 + 0x10;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_0065aed0();
  }
  return;
}

