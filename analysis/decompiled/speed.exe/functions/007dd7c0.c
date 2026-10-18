/* speed.exe 007dd7c0 _CPtoLCID; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _CPtoLCID
   
   Library: Visual Studio 2003 Debug */

undefined4 _CPtoLCID(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3a4:
    uVar1 = 0x411;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x3a8:
    uVar1 = 0x804;
    break;
  case 0x3b5:
    uVar1 = 0x412;
    break;
  case 0x3b6:
    uVar1 = 0x404;
  }
  return uVar1;
}

