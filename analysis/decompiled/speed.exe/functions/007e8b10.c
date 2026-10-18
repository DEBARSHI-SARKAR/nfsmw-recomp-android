/* speed.exe 007e8b10 FUN_007e8b10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007e8b10(uint *param_1,uint param_2,int param_3)

{
  *param_1 = param_3 << 8 | (~param_2 << 8 | 0xff) & *param_1;
  return;
}

