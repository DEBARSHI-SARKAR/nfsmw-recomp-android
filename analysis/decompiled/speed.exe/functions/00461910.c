/* speed.exe 00461910 FUN_00461910; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

void __fastcall FUN_00461910(int *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  FUN_007ec1bd();
  puVar2 = (ushort *)param_1[2];
  puVar1 = puVar2 + *param_1 * 4;
  for (; puVar2 != puVar1; puVar2 = puVar2 + (uint)*puVar2 * 4) {
  }
  FUN_007ec1c8();
  return;
}

