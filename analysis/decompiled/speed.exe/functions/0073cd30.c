/* speed.exe 0073cd30 FUN_0073cd30; analysis pseudocode, not buildable source.
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0073cd30(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  float10 fVar3;
  
  *param_1 = 0;
  uVar2 = 0;
  puVar1 = param_1 + 2;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    fVar3 = (float10)FUN_0045da70(0x40a00000);
    puVar1[2] = (float)(fVar3 + (float10)_DAT_00894b58);
    fVar3 = (float10)FUN_0045da70(0x3dcccccd);
    puVar1[4] = (float)(fVar3 + (float10)_DAT_008b4aa0);
    fVar3 = (float10)FUN_0045da70(0x3f800000);
    puVar1[3] = (float)fVar3;
    puVar1[5] = uVar2 & 3;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while ((int)uVar2 < 0x14);
  return param_1;
}

