/* speed.exe 0068a480 FUN_0068a480; analysis pseudocode, not buildable source.
 * calls 007c8f30 __allshl
 */

void __thiscall FUN_0068a480(int param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = (uint *)(param_1 + (param_2 + 0x40U >> 6) * 8);
  uVar2 = __allshl();
  *puVar1 = *puVar1 | (uint)uVar2;
  puVar1[1] = puVar1[1] | (uint)((ulonglong)uVar2 >> 0x20);
  return;
}

