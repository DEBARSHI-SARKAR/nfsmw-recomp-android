/* speed.exe 00599290 FUN_00599290; analysis pseudocode, not buildable source.
 * calls 0056d9d0 FUN_0056d9d0
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 005902e0 FUN_005902e0
 * calls 005796a0 FUN_005796a0
 */

int __fastcall FUN_00599290(int param_1)

{
  FUN_005796a0();
  _eh_vector_constructor_iterator_
            ((void *)(param_1 + 0xba),4,0x96,(_func_void_void_ptr *)&LAB_00565fb0,
             (_func_void_void_ptr *)&DAT_00565fc0);
  FUN_005902e0();
  FUN_0056d9d0();
  return param_1;
}

