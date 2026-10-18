/* speed.exe 0077ba80 FUN_0077ba80; analysis pseudocode, not buildable source.
 * calls 00778250 FUN_00778250
 * calls 0076e340 FUN_0076e340
 */

void __fastcall FUN_0077ba80(int param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  fVar1 = (float10)FUN_0076e340(*(undefined4 *)(param_1 + 0x2c4),(int)*(short *)(param_1 + 0x8e),
                                *(undefined1 *)(param_1 + 0x8c));
  FUN_00778250((float)fVar1,uVar2);
  return;
}

