/* speed.exe 008366b0 FUN_008366b0; analysis pseudocode, not buildable source.
 */

char FUN_008366b0(int param_1)

{
  if ((param_1 == 0x73656e64) || (param_1 == 0x62726463)) {
    return '\a';
  }
  if (param_1 == 0x61646475) {
    return '\x02';
  }
  if (param_1 == 0x64656c75) {
    return '\x03';
  }
  if (param_1 == 1) {
    return '\x01';
  }
  if (param_1 == 0x75736572) {
    return '\x06';
  }
  if (param_1 == 0x65707374) {
    return '\b';
  }
  if (param_1 == 0x696e7674) {
    return '\t';
  }
  return (param_1 != 0x67696e76) + '\t';
}

