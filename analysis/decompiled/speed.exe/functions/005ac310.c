/* speed.exe 005ac310 FUN_005ac310; analysis pseudocode, not buildable source.
 * calls 005abe00 FUN_005abe00
 * calls 005abfe0 FUN_005abfe0
 * calls 005abf80 FUN_005abf80
 * calls 005ac150 FUN_005ac150
 * calls 005ac230 FUN_005ac230
 */

undefined4
FUN_005ac310(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (param_2 == 0x16) {
    switch(param_3) {
    case 2:
      FUN_005abe00(param_4);
      break;
    case 3:
      FUN_005abf80(param_4);
      break;
    case 4:
      FUN_005abfe0(param_4);
      break;
    case 5:
      FUN_005ac150(param_4);
      break;
    case 6:
      FUN_005ac230(param_4);
    }
  }
  return param_5;
}

