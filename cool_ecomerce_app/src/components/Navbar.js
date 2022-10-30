import React from "react";
import styled from 'styled-components';
import { Badge } from "@material-ui/core";
import { Search, ShoppingCartOutlined } from "@material-ui/icons";


export default function Navbar() {

  const Container = styled.div`
    height: 60px;
    
  `;

  const Wrapper = styled.div`
    padding: 10px 20px;
    display: flex;
    align-items: center;
    justify-content: space-between;
    
  `;

  const Left = styled.div`
    flex: 1;
    display: flex;
    align-items: center;
  `;

  const Language = styled.span`
    font-size: 14px;
    cursor: pointer;
    
  `;

  const SearchContainer = styled.div`
  border: 0.5px solid lightgray;
  display: flex;
  align-items: center;
  margin-left: 25px;
  padding: 5px;
`;


  const Input = styled.input`
    border: none;
    
  `;

  const Center = styled.div`
    flex: 1;
    text-align: center;
  `;

  const Logo = styled.h1`
    font-weight: bold;
  
  `;
  const Right = styled.div`
    flex: 1;
    display: flex;
    align-items: center;
    justify-content: flex-end;
   
  `;

  const MenuItem = styled.div`
    font-size: 14px;
    cursor: pointer;
    margin-left: 25px;
    
  `;



  return (
    <Container>
      <Wrapper>
        <Left>
          <Logo>Prime.</Logo>
        </Left>
        <Center>
          <SearchContainer>
            <Input placeholder="Search" />
            <Search style={{ color: "gray", fontSize: 16 }} />
          </SearchContainer>
        </Center>
        <Right>
          <MenuItem>About Us</MenuItem>
          <MenuItem>Our Partner</MenuItem>
          <MenuItem>Register</MenuItem>
          <MenuItem>Sign-In</MenuItem>

        </Right>
      </Wrapper>
    </Container>
  );
};
