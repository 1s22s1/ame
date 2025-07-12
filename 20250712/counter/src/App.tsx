import { useState } from 'react'
import './App.css'
import { Button, Stack } from '@mui/material'

function App() {
  const [counter, setCounter] = useState(0)

  const plus = () => {
    setCounter(counter + 1)
  }

  const minus = () => {
    setCounter(counter - 1)
  }

  return (
    <>
      <Stack direction={'row'} spacing={2}>
        <Button variant="contained" onClick={plus}>+1</Button>
        <Button variant="contained" onClick={minus}>-1</Button>
      </Stack>

      <p>{`今は${counter}です。`}</p>
    </>
  )
}

export default App
