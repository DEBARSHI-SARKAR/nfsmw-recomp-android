/* speed.exe 006c03b0 FUN_006c03b0; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 */

void FUN_006c03b0(FILE *param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  char local_14 [4];
  char local_10 [4];
  char local_c [4];
  char local_8 [4];
  undefined4 local_4;
  
  local_1c = 0;
  local_18 = 0;
  local_c = (char  [4])s_DTRUEVISION_XFILE_008ae8fa._10_4_;
  local_14 = (char  [4])s_DTRUEVISION_XFILE_008ae8fa._2_4_;
  local_10 = (char  [4])s_DTRUEVISION_XFILE_008ae8fa._6_4_;
  local_8 = (char  [4])s_DTRUEVISION_XFILE_008ae8fa._14_4_;
  local_4 = 0x2e;
  if (param_1 != (FILE *)0x0) {
    _fwrite(&local_1c,1,0x1a,param_1);
  }
  return;
}

