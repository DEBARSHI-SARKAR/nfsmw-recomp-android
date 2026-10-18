/* speed.exe 0081b40c FUN_0081b40c; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081b40c(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    *param_2 = &DAT_008c5be0;
    break;
  case 1:
    *param_2 = "Stereo";
    break;
  case 2:
    *param_2 = &DAT_008c5bd4;
    break;
  case 3:
    *param_2 = &DAT_008c5bd0;
    break;
  case 4:
    *param_2 = "DTS 4.0";
    break;
  case 5:
    *param_2 = "DTS 5.1";
    break;
  case 6:
    *param_2 = "Dolby Digital 5.1";
    break;
  case 7:
    *param_2 = "Dolby ProLogic";
    break;
  case 8:
    *param_2 = "Dolby ProLogic II";
    break;
  default:
    return 0xfffffffb;
  }
  return 0;
}

