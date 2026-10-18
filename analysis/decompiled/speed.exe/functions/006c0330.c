/* speed.exe 006c0330 FUN_006c0330; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 */

void FUN_006c0330(FILE *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  
  local_8 = (undefined1)param_2;
  local_7 = (undefined1)((uint)param_2 >> 8);
  local_6 = (undefined1)param_3;
  local_5 = (undefined1)((uint)param_3 >> 8);
  local_14 = 0;
  local_13 = 0;
  local_12 = 2;
  local_11 = 0;
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_4 = 0x20;
  local_3 = 0x28;
  if (param_1 != (FILE *)0x0) {
    _fwrite(&local_14,1,0x12,param_1);
  }
  return;
}

