/* speed.exe 0051a290 FUN_0051a290; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __fastcall FUN_0051a290(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 8,0x30,3,(_func_void_void_ptr *)&LAB_0050e0d0,
             (_func_void_void_ptr *)&DAT_0050e0f0);
  return param_1;
}

