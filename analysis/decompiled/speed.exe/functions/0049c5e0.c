/* speed.exe 0049c5e0 FUN_0049c5e0; analysis pseudocode, not buildable source.
 * calls 0048ddf0 FUN_0048ddf0
 */

void __thiscall FUN_0049c5e0(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0048ddf0((undefined4 *)(param_2 + 0x10),param_1 + 0x48,&local_10);
  *(undefined4 *)(param_2 + 0x10) = local_10;
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined4 *)(param_2 + 0x18) = local_8;
  *(undefined4 *)(param_2 + 0x1c) = local_4;
  return;
}

