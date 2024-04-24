import React from "react";
import { Canvas } from "react-three-fiber";
import { AmbientLight, Box3 ,BoxGeometry} from "three";
const Scene = () => {
  return (
    <Canvas>
      <AmbientLight/>
      <pointLight position={[10, 10, 10]} />
      <Box>
        <meshStandardMaterial attach="material" color="hotpink" />
      </Box>
    </Canvas>
  );
};

export default Scene;
