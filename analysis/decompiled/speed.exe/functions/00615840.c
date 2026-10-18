/* speed.exe 00615840 FUN_00615840; analysis pseudocode, not buildable source.
 * calls 00614a40 FUN_00614a40
 * calls 00615770 FUN_00615770
 */

void FUN_00615840(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  char *local_4;
  
  local_4 = *(char **)(param_2 + 0x10);
  cVar1 = *local_4;
  if ((cVar1 == '@') || (cVar1 == '=')) {
    local_4 = local_4 + 1;
  }
  else if (cVar1 == '\x1b') {
    local_4 = "binary string";
  }
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  FUN_00614a40();
  FUN_00615770(&local_14,0);
  return;
}

